/*
 * VFrame.cpp
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#include "VFrame.h"
#include <string>

namespace VulpGui
{

VFrame::VFrame(std::string name)
{
	this->name = name;
	this->window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(this->window), this->name.c_str());
}

void VFrame::setTitle(std::string title)
{
	gtk_window_set_title(GTK_WINDOW(this->window), title.c_str());
}

void VFrame::setVisible(bool val)
{
	if (val)
	{
		gtk_widget_show(this->window);
	}
	else
	{
		gtk_widget_hide(this->window);
	}

}

void VFrame::setSize(int w,int h)
{
	gtk_window_resize(GTK_WINDOW(this->window), w, h);
}

VFrame::~VFrame()
{
	// TODO Auto-generated destructor stub
}

} /* namespace VulpGui */
