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
        var mbar = new MainBar ();
        box.pack_start (mbar, false, true, 0);
        // implement button function
        (mbar.get_instance("info")).clicked.connect (this.on_clicked_app_info);
        (mbar.get_instance("exit")).clicked.connect (this.on_clicked_app_exit);

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
        var dialog = new AppVerDialog (this, this.app_ver);

        dialog.response.connect (dialog.destroy);
        dialog.show_all ();
    }
}

public static int main (string[] args) {
    Gtk.init (ref args);

    var css = new AppCss();
    var css_provider = new Gtk.CssProvider();
    try {
        css_provider.load_from_data(css.get());
    } catch (GLib.Error e) {
        warning ("Style sheet data did not load: %s", e.message);
    }
    Gtk.StyleContext.add_provider_for_screen (
        Gdk.Screen.get_default(),
        css_provider,
        Gtk.STYLE_PROVIDER_PRIORITY_APPLICATION
    );
    var app = new SDETool ();
    app.show_all ();
    Gtk.main ();
    return 0;
}

