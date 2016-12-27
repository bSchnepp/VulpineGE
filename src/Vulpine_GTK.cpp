/*
 ============================================================================
 Name        : Vulpine_GTK.cpp
 Author      : Brian Schnepp
 Version     :
 Copyright   : See 'LICENSE' in root directory of this project.
 Description : Hello World in gttkmm
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
