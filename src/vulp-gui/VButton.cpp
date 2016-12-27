/*
 * VButton.cpp
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#include <gtk/gtk.h>
#include <string>
#include "VButton.h"

namespace VulpGui
{

VButton::VButton()
{
	this->button = gtk_button_new();
}

VButton::VButton(std::string name)
{
	this->button = gtk_button_new_with_label(name.c_str());
}

void VButton::setText(const std::string name)
{
	gtk_button_set_label(GTK_BUTTON(this->button), name.c_str());
}

VButton::~VButton()
{
	// TODO Auto-generated destructor stub
}

} /* namespace VulpGui */
