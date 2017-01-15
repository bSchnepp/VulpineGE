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
	/*
	 * When we convert a .blend to .fxm + .fxk game asset, we do a couple of things:
	 * EVERY mesh MUST have an IK bone (because every vertex must associate with a bone): to do this, we simply add an IK bone to the mesh, thus giving it a matching .fxk file.
	 * Each mesh must define it's 'importance' to visual quality, such that we can collapse them dynamically and allow for automatic LODing.
	 * Every mesh must ONLY consist of triangles, OR coplanar quads (which are auto-converted to tris anyway).
	 *
	 */
	virtual ~FoxSkeleton();
};

class Bone
{

};

class Weight
{
	//Points to several bones, declares weights for mesh deformation, etc.
};

} /* namespace VulpUtil */

#endif /* ANIM_FOXSKELETON_H_ */
