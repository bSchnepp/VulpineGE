/*
 * VButton.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef VULP_GUI_VBUTTON_H_
#define VULP_GUI_VBUTTON_H_

namespace VulpGui
{

class VButton
{
public:
	VButton();
	VButton(std::string name);

	void setText(std::string name);

	virtual ~VButton();

private:
	GtkWidget* button;
};

} /* namespace VulpGui */

#endif /* VULP_GUI_VBUTTON_H_ */
