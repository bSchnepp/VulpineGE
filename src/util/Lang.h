/*
 * Lang.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef UTIL_LANG_H_
#define UTIL_LANG_H_

namespace VulpUtil
{

static wchar_t* location = L"Lcle/";	//Expected location of localization files (i.e., dialog tables) when running.
static wchar_t* filename = L"language.lcl";
static char* originalLang = "en-US";//Actual set we want to grab at run-time. This file will be this name + the name of the above file. (i.e., "../Lcle/en-USlanguage.lcl"
} /* namespace VulpUtil */

#endif /* UTIL_LANG_H_ */
