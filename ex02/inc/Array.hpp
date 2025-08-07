#pragma once

#include <string>
#include <iostream>

template <typename T> class Array {
	private:
		size_t _len;
		T*	_array;

	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array& orig);
		Array& operator = (const Array& orig);
		size();

};