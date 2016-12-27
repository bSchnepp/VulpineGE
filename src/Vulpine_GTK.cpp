/*
 ============================================================================
 Name        : Vulpine_GTK.cpp
 Author      : Brian Schnepp
 Version     :
 Copyright   : See 'LICENSE' in root directory of this project.
 NOTICE:
 	 This project requires GTK+, which is licensed under the LGPL.
 	 Sources for that are here: https://github.com/GNOME/gtk
 	 For absolute clarity, I'm using libgtk-3-0: 3.22.5-1 (amd64), obtained from Ubuntu repositories.
 	 Since I don't distribute binaries, linking this will be your own problem. (Ideally you want to dynamically link)
 	 License for GTK is here: https://github.com/GNOME/gtk/blob/master/COPYING
 	 Do note that GTK is __only__ used for tools, NOT for the actual game-world stuff itself. (That is done via SDL)
 	 LGPL looks scary, please tell me if I'm doing something wrong.
 ============================================================================
 */

#include <gtk/gtk.h>
#include "vulp-gui/VFrame.h"

int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);
	VulpGui::VFrame* vframe = new VulpGui::VFrame("Hello, penguins!");
	vframe->setTitle("Hello again, penguins!");
	vframe->setSize(1920, 1080);
	vframe->setVisible(true);
	gtk_main();
	return 0;
}
