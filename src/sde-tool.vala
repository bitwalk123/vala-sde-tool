using Gtk;

public class SDETool : Gtk.Window {
    protected string app_ver = "0.0.1";

    public SDETool () {
        this.destroy.connect (Gtk.main_quit);
        this.title = "SDE Tool";
        this.set_default_size(800, 400);
        this.border_width = 1;

        //var cssProvider = new Gtk.CssProvider ();
        //cssProvider.load_from_path ("sde-tool.css");

        var box = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
        this.add (box);

        // menu button bar
        var mbar = new Gtk.Box (Gtk.Orientation.HORIZONTAL, 0);
        box.pack_start (mbar, false, true, 0);

        // button for application config
        var but_config = new Gtk.Button.from_icon_name ("emblem-system", Gtk.IconSize.BUTTON);;
        mbar.pack_start (but_config, false, true, 0);

        // button for application add
        var but_add = new Gtk.Button.from_icon_name ("list-add", Gtk.IconSize.BUTTON);;
        mbar.pack_start (but_add, false, true, 0);

        // button for application exit
        var but_exit = new Gtk.Button.from_icon_name ("application-exit", Gtk.IconSize.BUTTON);
        but_exit.clicked.connect (this.on_clicked_app_exit);
        mbar.pack_end (but_exit, false, true, 0);

        // button for application information
        var but_info = new Gtk.Button.from_icon_name ("dialog-information", Gtk.IconSize.BUTTON);;
        but_info.clicked.connect (this.on_clicked_app_info);
        mbar.pack_end (but_info, false, true, 0);

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

    // Dialog Application Information
    void on_clicked_app_info (Gtk.Button button) {
        var dialog = new AppVerDialog ("About", this, this.app_ver);

        dialog.response.connect (dialog.destroy);
        dialog.show_all ();
    }
}

public static int main (string[] args) {
    Gtk.init (ref args);

    var app = new SDETool ();
    app.show_all ();
    Gtk.main ();
    return 0;
}

