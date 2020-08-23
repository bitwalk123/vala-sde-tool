using Gtk;

public class SDETool : Gtk.Window {

    public SDETool () {
        this.destroy.connect (Gtk.main_quit);
        this.title = "SDE Tool";
        this.set_default_size(800, 400);
        this.border_width = 1;

        var box = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
        this.add (box);

        var mbar = new MyContainer ();
        box.pack_start (mbar, false, true, 0);

        var notebook = new Gtk.Notebook ();
        box.pack_start (notebook, true, true, 0);

        var page1 = new Gtk.ScrolledWindow (null, null);
        page1.set_policy (
            Gtk.PolicyType.AUTOMATIC,
            Gtk.PolicyType.AUTOMATIC
        );

        notebook.append_page(page1, new Gtk.Label("Main"));
    }
}

