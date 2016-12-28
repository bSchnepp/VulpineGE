/*
 * Explorer.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef EDITOR_EXPLORER_H_
#define EDITOR_EXPLORER_H_

#include "../vulp-gui/VFrame.h"

namespace VulpEditor
{

class Explorer
{
public:
	Explorer();
	virtual ~Explorer();
private:
	VulpGui::VFrame* frame;
};

} /* namespace VulpGui */

#endif /* EDITOR_EXPLORER_H_ */
