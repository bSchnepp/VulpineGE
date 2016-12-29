/*
 * EditorCore.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef EDITOR_EDITORCORE_H_
#define EDITOR_EDITORCORE_H_

#include "../vulp-gui/VFrame.h"

namespace VulpEditor
{

class EditorCore
{
public:
	EditorCore();
	virtual ~EditorCore();
	VulpGui::VFrame* getFrame();
	void setFrame(VulpGui::VFrame* frame);

private:
	VulpGui::VFrame* frame;
};

} /* namespace VulpGui */

#endif /* EDITOR_EDITORCORE_H_ */
