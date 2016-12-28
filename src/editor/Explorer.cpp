/*
 * Explorer.cpp
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#include "Explorer.h"
#include "../vulp-gui/VFrame.h"

namespace VulpEditor
{

Explorer::Explorer()
{
	this->frame = new VulpGui::VFrame("Vulpine Explorer");
	this->frame->setSize(250, 540);
	this->frame->setVisible(true);
}

Explorer::~Explorer()
{
	delete this->frame;
}

} /* namespace VulpGui */
