#include "Point.h"

Point::Point(int x, int y)
{
	this->x_ = x;
	this->y_ = y;
}

Point Point::middle(Point a)
{
	Point middle(0, 0);

	middle.setX((this->x_ + a.getX()) / 2);
	middle.setY((this->y_ + a.getY()) / 2);

	return middle;
}

Point Point::operator+(Point a)
{
	this->x_ += a.getX();
	this->y_ += a.getY();

	return a;
}

