/*
 * EditorCore.cpp
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#include "EditorCore.h"

namespace VulpEditor
{

EditorCore::EditorCore()
{
	this->frame = new VulpGui::VFrame("Untitled Editor Window");
	this->frame->setSize(250, 1080);
	this->frame->setVisible(true);
}

EditorCore::~EditorCore()
{
	delete this->frame;
}

VulpGui::VFrame* EditorCore::getFrame()
{
	return this->frame;
}

void EditorCore::setFrame(VulpGui::VFrame* frame)
{
	this->frame = frame;
}

} /* namespace VulpGui */
