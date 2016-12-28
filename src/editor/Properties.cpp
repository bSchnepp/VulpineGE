/*
 * Explorer.cpp
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#include "Properties.h"
#include "../vulp-gui/VFrame.h"

namespace VulpEditor
{

Properties::Properties()
{
	this->frame = new VulpGui::VFrame("Vulpine Properties");
	this->frame->setSize(250, 540);
	this->frame->setVisible(true);
}

Properties::~Properties()
{
	delete this->frame;
}

} /* namespace VulpGui */
