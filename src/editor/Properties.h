/*
 * Explorer.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef EDITOR_PROPERTIES_H_
#define EDITOR_PROPERTIES_H_

#include "../vulp-gui/VFrame.h"

namespace VulpEditor
{

class Properties
{
public:
	Properties();
	virtual ~Properties();
private:
	VulpGui::VFrame* frame;
};

} /* namespace VulpGui */

#endif /* EDITOR_EXPLORER_H_ */
