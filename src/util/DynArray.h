/*
 * DynArray.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef UTIL_DYNARRAY_H_
#define UTIL_DYNARRAY_H_

namespace VulpUtil
{

template <class T>
class DynArray
{
public:
	DynArray(unsigned int size);
	virtual ~DynArray();

	void push(T item);
	T pop();

private:
	T dynarray[];
	void realloc();
};

} /* namespace VulpUtil */

#endif /* UTIL_DYNARRAY_H_ */
