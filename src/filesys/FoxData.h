/*
 * FoxData.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef FILESYS_FOXDATA_H_
#define FILESYS_FOXDATA_H_

namespace VulpUtil
{

class FoxData
{
public:
	FoxData();
	//TODO: read a new filesystem called 'foxfs' and check through 'data.fox', 'audio.fox', etc. etc.
	//We should be async here, help us load stuff quickly and dynamically. At least try.
	virtual ~FoxData();
};

} /* namespace VulpUtil */

#endif /* FILESYS_FOXDATA_H_ */
