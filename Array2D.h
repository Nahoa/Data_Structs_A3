#pragma once
#include "Array.h"

template<typename T>
class Array2D
{
public:
	Array2D();
	Array2D(int row, int column);
	Array2D(const Array2D & copy);
	~Array2D();
	Array2D& operator=(const Array2D & rhs);
	Row<T> & operator[](int index);
	int getRow();
	void setRow(in row);
	int getColumn();
	void setColumn(int column);
	T & Select(int row, int column);
private:
	Array<T> m_array;
	int m_row;
	int m_col;
};

template<typename T>
inline Array2D<T>::Array2D() : m_array(nullptr), m_row(0), m_col(0)
{
}

template<typename T>
inline Array2D<T>::Array2D(int row, int column) : m_array(nullptr), m_row(row), m_col(column)
{
}

template<typename T>
inline Array2D<T>::Array2D(const Array2D & copy)
{
	*this = copy;
}

template<typename T>
inline Array2D<T>::~Array2D()
{
}

template<typename T>
inline Array2D<T> & Array2D<T>::operator=(const Array2D & rhs)
{
	//add copy ctor stuff into here
	return *this;
}
