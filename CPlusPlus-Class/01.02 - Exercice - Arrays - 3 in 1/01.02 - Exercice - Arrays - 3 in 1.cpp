#include <iostream>
#include <random>
#include <ctime>
#include <array>
// 1 Find highest number in a random array
// 2 Check if in input is in random array
// 3 Prints out multiplication table

int bestScore()
// EXERCICE 01
{
	int highestNumber = 0;
	int myArray[5]{};
	for (int i = 0; i < 5; i++)
	{
		myArray[i] = (rand() % 100 + 1);
		std::cout << myArray[i] << std::endl;
		if (myArray[i] > highestNumber)
		{
			highestNumber = myArray[i];
		}
	}
	std::cout << std::endl << "The highest number in that array is " << highestNumber << "." << std::endl << std::endl;
	//for (int i = 0; i < myArray.size(); i++)
	return NULL;
}

int inputInRandomArray()
// EXERCICE 02
{
	int v = 0;
	int myArray[20]{};
	bool condition = false;
	std::cout << "Write a number." << std::endl << ">";
	std::cin >> v;
	std::cout << std::endl;
	for (int i = 0; i < 20; i++)
	{
		myArray[i] = (rand() % 21);
		std::cout << myArray[i] << std::endl;
		if (myArray[i] == v)
		{
			condition = true;
		}
	}

	if (condition == true)
	{
		std::cout << std::endl << "Your number is in that array!" << std::endl << std::endl;
	}
	else
	{
		std::cout << std::endl << "Your number does not appear to be in that array..." << std::endl << std::endl;
	}
	return NULL;
}

std::string centerText(int x)
// EXERCICE 03
{
	if (x < 10)
	{
		return "      ";
	}
	else if (x >= 10 && x < 100)
	{
		return "     ";
	}
	else
	{
		return "    ";
	}
}

int multiplicationTable()
// EXERCICE 03
{
	int tableY[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int tableX[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	std::cout << centerText(0) << 0;
	for (int i = 0; i < 10; i++)
	{
		std::cout << centerText(tableY[i]) << (tableY[i]);
	}

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << centerText(tableY[i]) << (tableY[i]);
		for (int ib = 0; ib < 10; ib++)
		{
			std::cout << centerText(tableX[ib] * (i + 1)) << (tableX[ib] * (i + 1));
		}
		std::cout << std::endl;
	}
	return NULL;
}



int main()
{
	srand((unsigned)time(0));
	bool a = true;

	while (a == true)
	{
		int b = 0;
		std::cout << "Chose the exercice you want to see." << std::endl
			<< "1. Find best score in an array." << std::endl
			<< "2. Check if input is in random array." << std::endl
			<< "3. Multiplication table" << std::endl << std::endl << ">";
		std::cin >> b;
		switch (b)
		{
		case 1:
			std::cout << std::endl;
			bestScore();
			break;
		case 2:
			std::cout << std::endl;
			inputInRandomArray();
			break;
		case 3:
			std::cout << std::endl;
			multiplicationTable();
			break;
		default:
			break;
		}

	}

	return NULL;
}