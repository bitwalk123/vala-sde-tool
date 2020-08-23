using Gtk;

public static int main (string[] args) {
    Gtk.init (ref args);

    var app = new SDETool ();
    app.show_all ();
    Gtk.main ();
    return 0;
}
