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
#include <iostream>
#include <vector>
#include "editor/Explorer.h"
#include "editor/Properties.h"
#include "editor/Toolbox.h"
#include "util/Hash.h"

int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);
	VulpEditor::Explorer* explorer = new VulpEditor::Explorer();
	VulpEditor::Properties* properties = new VulpEditor::Properties();
	VulpEditor::Toolbox* toolbox = new VulpEditor::Toolbox();

	gtk_main();	// Main loop -- pass signals to it somehow dynamically Maybe we just need pointers to functions and pre-compile everything here???
	delete explorer;
	delete properties;
	delete toolbox;

	//I'll probably switch to using gtkmm whenever I can configure it to work in Eclipse here.
	//Thus the need for abstraction... and maybe for easier porting to this thing called "Windows", whatever that is. :) GCC does all the work anyway, not fixing for VS or doing a cmake.
	return 0;
}
