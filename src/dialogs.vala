using Gtk;

// ============================================================================
//  AppVerDialog - Dialog for Application Version
// ============================================================================
public class AppVerDialog : Gtk.Dialog {
    string version;

    public AppVerDialog (Gtk.Window parent, string version) {
        this.version = version;
        this.set_icon_name("dialog-information");
        this.set_title("About");
        this.set_resizable(false);
        this.set_modal (true);
        this.add_button ("_OK", Gtk.ResponseType.NONE);

        var content = this.get_content_area ();
        var box = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
        box.set_spacing (0);
        content.add (box);

        // implemet contents of the dialog
        this.set_contents(box);
    }

    // ------------------------------------------------------------------------
    //  set_contents
    //
    //  argument:
    //    Gtk.Box box - box layout container for dialog messages
    // ------------------------------------------------------------------------
    public void set_contents(Gtk.Box box) {
        var lab_name = new Gtk.Label ("SDE Tool (Vala edition)");
        lab_name.get_style_context().add_class("appname");
        box.pack_start (lab_name, true, true, 0);

        var lab_ver = new Gtk.Label ("version " + this.version);
        box.pack_start (lab_ver, true, true, 0);

        var lab_author = new Gtk.Label ("Copyright 2020 Keiichi Takahashi");
        box.pack_start (lab_author, true, true, 0);

        var lab_license = new Gtk.Label ("under Apache License 2.0");
        box.pack_start (lab_license, true, true, 0);
    }
}
