#pragma once
#include <iostream>
class Point
{
private:
	int x_;
	int y_;

public:
	Point(int x, int y);

	int getX() { return x_; };
	void setX(int x) { x_ = x; };

	int getY() { return y_; };
	void setY(int y) { y_ = y; };

	int print();
};

