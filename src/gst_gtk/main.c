#include <gtk/gtk.h>
#include <gst/gst.h>
int main(int argc,char *argv[])
{
	GtkWidget *windows;
	gtk_init(&argc,&argv);
	/* Initialize GStreamer */
	gst_init (&argc, &argv);
	windows = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_widget_show(windows);
	gtk_main();
	return 0;
}
