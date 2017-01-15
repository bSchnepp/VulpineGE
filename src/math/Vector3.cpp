/*
 * Vector3.cpp
 *
 *  Created on: Dec 28, 2016
 *      Author: brian-dev
 */

#include "Vector3.h"

namespace VulpUtil
{

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

float Vector3::getX()
{
	return this->x;
}

float Vector3::getY()
{
	return this->y;
}

float Vector3::getZ()
{
	return this->z;
}

void Vector3::setX(float x)
{
	this->x = x;
}

void Vector3::setY(float y)
{
	this->y = y;
}

void Vector3::setZ(float z)
{
	this->z = z;
}

Vector3::~Vector3()
{
}

} /* namespace VulpUtil */
