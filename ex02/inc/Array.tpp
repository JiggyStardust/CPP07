#include "../inc/Array.hpp"

template <typename T> Array<T>::Array() : _array(nullptr), _size(0) {
	std::cout << "constructor without parameter" << std::endl;
}

template <typename T> Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {
	std::cout << "constructor with parameter: " << n << std::endl;
}

template <typename T> Array<T>::~Array()
{
	std::cout << "destructor" << std::endl;
	delete[] _array;
}

template <typename T> Array<T>::Array(const Array& orig) : _array(new T[orig._size]), _size(orig._size)
{
	std::cout << "copy constructor" << std::endl;
	for (unsigned int i = 0; i < _size; ++i)
	{
		_array[i] = orig._array[i];
	}
}

template <typename T> Array<T>& Array<T>::operator = (const Array& orig)
{
	std::cout << "copy assignment operator" << std::endl;
	if (this != &orig)
	{
		delete[] _array;
		_array = new T[orig._size];
		_size = orig._size;
		for (unsigned int i = 0; i < _size; ++i)
		{
			_array[i] = orig._array[i];
		}
	}
	return (*this);
}

template <typename T> T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
	{
		throw (std::out_of_range("Index out of bounds"));
	}
	return _array[index];
}

template <typename T> size_t Array<T>::size() const 
{
	return (_size);
}