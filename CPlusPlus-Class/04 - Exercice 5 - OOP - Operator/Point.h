#pragma once
#include <iostream>
#include <cmath>

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

	Point middle(Point a);
	Point operator+(Point a);
	bool operator>(Point a);
};

