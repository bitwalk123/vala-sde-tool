using Gtk;

public class AppVerDialog : Gtk.Dialog {
    public AppVerDialog (string title, Gtk.Window parent, string version) {
        this.set_icon_name("dialog-information");
        this.set_title(title);
        this.set_modal (true);
        this.add_button ("_OK", Gtk.ResponseType.NONE);

        var content = this.get_content_area ();

        var box = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
        box.set_spacing (2);
        content.add (box);

        var lab_main = new Gtk.Label ("SDE Tool (Vala edition)");
        box.pack_start (lab_main, true, true, 0);

        var lab_ver = new Gtk.Label ("version " + version);
        box.pack_start (lab_ver, true, true, 0);

        var lab_author = new Gtk.Label ("(C) 2020 Keiichi Takahashi");
        box.pack_start (lab_author, true, true, 0);
    }
}
