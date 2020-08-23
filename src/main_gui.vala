using Gtk;

public class SDETool : Gtk.Window {

    public SDETool () {
        this.destroy.connect (Gtk.main_quit);
        this.title = "SDE Tool";
        this.set_default_size(800, 400);
        this.border_width = 1;

        var box = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
        this.add (box);

        var notebook = new Gtk.Notebook ();
        box.add (notebook);

        var page1 = new Gtk.Box(Gtk.Orientation.VERTICAL, 0);
        var lab1 = new Gtk.Label("Title is string");

        page1.add(lab1);
        notebook.append_page(page1, new Gtk.Label("Main"));
    }
}

