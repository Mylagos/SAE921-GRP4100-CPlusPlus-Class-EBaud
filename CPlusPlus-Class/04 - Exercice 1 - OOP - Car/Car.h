#pragma once
#include <iostream>

class Car
{

private:
	std::string brand_;
	std::string model_;
	int year_;

public:
	// brand_ accessor
	std::string getBrand() { return brand_; };
	void setBrand(std::string brand) { brand_ = brand; };
	// model_ accessor
	std::string getModel() { return model_; };
	void setModel(std::string model) { model_ = model; };
	// year_ accessor
	int getYear() { return year_; };
	void setYear(int year) { year_ = year; };
	
	void printCar();
};

