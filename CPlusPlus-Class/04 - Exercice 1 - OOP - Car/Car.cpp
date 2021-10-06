#include "Car.h"

void Car::printCar()
{
	std::cout << "Constructor : " << brand_ << std::endl;
	std::cout << "Model : " << model_ << std::endl;
	std::cout << "Year : " << year_ << std::endl;
}