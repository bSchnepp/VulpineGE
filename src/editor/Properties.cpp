/*
 * Explorer.cpp
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#include "Properties.h"


namespace VulpEditor
{

Properties::Properties()
{
	this->getFrame()->setTitle("Vulpine Properties");
	this->getFrame()->setSize(250, 540);
}

Properties::~Properties()
{
}

} /* namespace VulpGui */
