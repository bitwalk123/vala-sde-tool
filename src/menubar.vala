using Gtk;

// ----------------------------------------------------------------------------
//  button bar for main panel
// ----------------------------------------------------------------------------
public class MainBar : Gtk.Box {
    Gtk.Button but_config;
    Gtk.Button but_add;
    Gtk.Button but_info;
    Gtk.Button but_exit;
 
    public MainBar () {
        this.set_orientation(Gtk.Orientation.HORIZONTAL);
        this.set_spacing(0);

        // button for application config
        this.but_config = new Gtk.Button.from_icon_name ("emblem-system", Gtk.IconSize.BUTTON);;
        this.pack_start (but_config, false, true, 0);

        // button for application add
        this.but_add = new Gtk.Button.from_icon_name ("list-add", Gtk.IconSize.BUTTON);;
        this.pack_start (but_add, false, true, 0);

        // button for application exit
        this.but_exit = new Gtk.Button.from_icon_name ("application-exit", Gtk.IconSize.BUTTON);
        this.pack_end (but_exit, false, true, 0);

        // button for application information
        this.but_info = new Gtk.Button.from_icon_name ("dialog-information", Gtk.IconSize.BUTTON);;
        this.pack_end (but_info, false, true, 0);
    }
    
    public Gtk.Button get_instance(string name) {
        switch (name) {
            case "info":
                return(this.but_info);
            case "exit":
                return(this.but_exit);
            default: 
                return((Gtk.Button) null);
        }
    }
}