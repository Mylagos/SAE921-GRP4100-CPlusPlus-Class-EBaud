#include "Point.h"

Point::Point(int x, int y)
{
	this->x_ = x;
	this->y_ = y;
}

int Point::print()
{
	std::cout << "The coordinates of this point are :" << std::endl
		<< "X = " << this->x_ << std::endl
		<< "Y = " << this->y_ << std::endl;
}