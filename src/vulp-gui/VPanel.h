/*
 * VPanel.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef VULP_GUI_VPANEL_H_
#define VULP_GUI_VPANEL_H_

namespace VulpGui
{

class VPanel
{
public:
	VPanel();
	virtual ~VPanel();

	void setPreferredDimensions(int w, int h);
	int getPreferredWidth(int w);
	int getPreferredHeight(int h);

private:
	int preferredWidth;
	int preferredHeight;
};

} /* namespace VulpGui */

#endif /* VULP_GUI_VPANEL_H_ */
