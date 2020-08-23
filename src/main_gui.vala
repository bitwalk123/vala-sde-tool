using Gtk;

public class SDETool : Gtk.Window {

    public SDETool () {
        this.destroy.connect (Gtk.main_quit);
        this.title = "SDE Tool";
        this.set_default_size(800, 400);
        this.border_width = 1;

        var box = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
        this.add (box);

        // menu button bar
        var mbar = new Gtk.Box (Gtk.Orientation.HORIZONTAL, 0);
        box.pack_start (mbar, false, true, 0);

        // button for application exit
        var but_exit = new Gtk.Button.from_icon_name ("application-exit", Gtk.IconSize.BUTTON);
        but_exit.clicked.connect (this.on_clicked_app_exit);
        mbar.pack_end (but_exit, false, true, 0);

        // notbook for main panel
        var notebook = new Gtk.Notebook ();
        box.pack_start (notebook, true, true, 0);

        // This windows is for tree view
        var page1 = new Gtk.ScrolledWindow (null, null);
        page1.set_policy (
            Gtk.PolicyType.AUTOMATIC,
            Gtk.PolicyType.AUTOMATIC
        );

        notebook.append_page(page1, new Gtk.Label("Main"));
    }

    // Application Exit
    void on_clicked_app_exit (Gtk.Button button) {
        Gtk.main_quit();
    }
}

