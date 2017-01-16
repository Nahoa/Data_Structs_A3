#pragma once
#include"Array2D.h"

template<typename T>
class Row 
{
public:
	Row();
	Row(Array2D& array, int row);
	Row(const Row & copy);//copy ctor
	T & operator[] (int column) const;
	~Row();

private:
	Array2D& m_array2D;
	int m_row;
};

