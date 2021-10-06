#include "Point.h"

#include <iostream>

enum class switchCase
{
	Menu = 'a',
	Print = 'b',
	Shift = 'c',
	InputChoose = 'd',
	InputOne = 'e',
	InputTwo = 'f',
	Distance = 'g',
	Middle = 'h'
	
};

switchCase menu()
{
	char input;
	std::cout << "What do you want to do?" << std::endl
		<< "1 : Show points coordinates" << std::endl
		<< "2 : Shift point to another location" << std::endl
		<< "3 : Set point coordinates" << std::endl
		<< "4 : Show the distance between the two points" << std::endl
		<< "5 : Show the coordinate at the middle of the two points" << std::endl
		<< ">";
	std::cin >> input;
	
	switch (input)
	{
	case '1':
		return(switchCase::Print);
		break;
	case '2':
		return(switchCase::Shift);
		break;
	case '3':
		return(switchCase::InputChoose);
		break;
	case '4':
		return(switchCase::Distance);
		break;
	case '5':
		return(switchCase::Middle);
		break;
	default:
		break;
	}

}

int main()
{
	Point pointA(3, 5);
	Point pointB(0, 0);

	switchCase init;

	switch (init)
	{
	case switchCase::Menu:
		menu();
		break;
	case switchCase::Print:
		break;
	case switchCase::Shift:
		break;
	case switchCase::InputChoose:
		break;
	case switchCase::InputOne:
		break;
	case switchCase::InputTwo:
		break;
	case switchCase::Distance:
		break;
	case switchCase::Middle:
		break;
	default:
		break;
	}

}