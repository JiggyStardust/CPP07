#pragma once

#include <string>
#include <iostream>


template <typename T> class Array {
	private:
	T*	_array;
	size_t _size;
	
	public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(const Array& orig);
	Array& operator = (const Array& orig);
	T& operator[](unsigned int index);
	size_t	size() const;
	
};
#include "Array.tpp"