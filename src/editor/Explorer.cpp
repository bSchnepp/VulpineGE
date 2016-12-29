/*
 * Explorer.cpp
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#include "Explorer.h"

namespace VulpEditor
{

Explorer::Explorer()
{
	this->getFrame()->setTitle("Vulpine Editor");	//Refactoring is fun! Finish this later.
	this->getFrame()->setSize(250, 540);
}

Explorer::~Explorer()
{
}

} /* namespace VulpGui */
