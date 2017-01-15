/*
 * Vector3.h
 *
 *  Created on: Dec 28, 2016
 *      Author: brian-dev
 */

#ifndef MATH_VECTOR3_H_
#define MATH_VECTOR3_H_

namespace VulpUtil
{

class Vector3
{
public:
	Vector3(float x, float y, float z);
	float getX();
	float getY();
	float getZ();

	void setX(float x);
	void setY(float y);
	void setZ(float z);


	float   getMagnitude();
	Vector3 normalize();

	virtual ~Vector3();

private:
	float x;
	float y;
	float z;
};

} /* namespace VulpUtil */

#endif /* MATH_VECTOR3_H_ */
