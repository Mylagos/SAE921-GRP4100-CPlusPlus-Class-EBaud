#include <iostream>
// Takes user's imput into concideration to print out animal noises using ENUM
enum class Animal : char
{
	Lion = 'l',
	Sheep = 's',
	Dog = 'd',
	Bear = 'b',

};

std::string animalScream(Animal animal_)
{
	switch (animal_)
	{
	case Animal::Lion:
		return "The lion goes ROAAAR!";
		break;
	case Animal::Sheep:
		return "The sheep goes Beeeeh!";
		break;
	case Animal::Dog:
		return "The dog goes Woof!";
		break;
	case Animal::Bear:
		return "The bear goes Ruff!";
		break;
	default:
		return "There is no such animal on record.";
		break;
	}
	return NULL;
}

int main()
{
	bool a = true;
	while (a == true)
	{
		char input = 'z';
		std::cout << "Which animal do you want to hear the sceam of ?" << std::endl
			<< "'l' Lion" << std::endl
			<< "'s' Sheep" << std::endl
			<< "'d' Dog" << std::endl
			<< "'b' Bear" << std::endl;
		std::cin >> input;
		std::cout << animalScream(static_cast<Animal>(input)) << std::endl << std::endl;
	}

	return NULL;
}