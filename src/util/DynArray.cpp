/*
 * DynArray.cpp
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#include "DynArray.h"
//Effectively a single-direction stack that dynamically resizes if we add too much.
//Smaller than  std::vector I suppose.
//Figuring out a way to do double stack thing or something later.

namespace VulpUtil
{

template<class T>
DynArray<T>::DynArray(unsigned int size)
{
	this->dynarray = new T[size];
}

template<class T>
DynArray<T>::~DynArray()
{
	delete[] this->dynarray;
}

template<class T>
T DynArray<T>::pop()
{
	T item = this->dynarray[0];
	auto sizearray = (sizeof(this->dynarray) / sizeof(*this->dynarray));
	for (int i = 1; i < sizearray; i++)
	{
		dynarray[i - 1] = dynarray[i];
	}
	dynarray[sizearray - 1] = nullptr;
	return item;
}

template<class T>
void DynArray<T>::push(T item)
{
	auto sizearray = (sizeof(this->dynarray) / sizeof(*this->dynarray));
	long indexOK = 0;
	for (int i = 0; i < sizearray; i++)
	{
		if (this->dynarray[i] == nullptr)
		{
			indexOK = i;
			break;
		}
	}
	long remainingAssets = sizearray - indexOK;
	//Checking if adding one size of array (valid content) puts us over the actual amount of spots reserved by the array.
	//If it does, we reallocate the whole array and delete the old one.
	bool OkToAddMore = (remainingAssets > 0);
	if (OkToAddMore)
	{
		for (int i = 0; i < sizearray; i++)
		{
			this->dynarray[i + 1] = this->dynarray[i];
		}
	}
	else
	{
		this->realloc();
	}
	this->dynarray[0] = item;
}

template<class T>
void DynArray<T>::realloc()
{
	//Adds to the total amount available for the array, then copies the data, then deletes the original, then updates pointers.
	auto sizearray = (sizeof(this->dynarray) / sizeof(*this->dynarray)) + 6;
	T ndynarray[] = new T[sizearray];
	for (int i = 0; i < sizearray - 5; i++)
	{
		ndynarray[i + 1] = this->dynarray[i];
	}
	delete[] this->dynarray;
	this->dynarray = ndynarray;
}

} /* namespace VulpUtil */
