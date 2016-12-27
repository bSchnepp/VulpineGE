/*
 * VFrame.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef VULP_GUI_VFRAME_H_
#define VULP_GUI_VFRAME_H_

#include <gtk/gtk.h>
#include <string>

/*
 * Wrapper around GTK+ to make it act more like Swing.
 * Because Swing is awesome.
 */
namespace VulpGui
{

class VFrame
{
public:
	VFrame(std::string name);
	virtual ~VFrame();

	void setVisible(bool val);
	void setTitle(std::string title);

	void setSize(int w, int h);


private:
	std::string name;
	GtkWidget* window;
};

} /* namespace VulpGui */

#endif /* VULP_GUI_VFRAME_H_ */
