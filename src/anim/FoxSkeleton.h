/*
 * FoxSkeleton.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef ANIM_FOXSKELETON_H_
#define ANIM_FOXSKELETON_H_

namespace VulpUtil
{

class FoxSkeleton
{
public:
	FoxSkeleton();
	//TODO, then we need a tool to convert .blend to this, since we would otherwise have to write our own (NOT fun to do FAST!!!!)
	virtual ~FoxSkeleton();
};

} /* namespace VulpUtil */

#endif /* ANIM_FOXSKELETON_H_ */
