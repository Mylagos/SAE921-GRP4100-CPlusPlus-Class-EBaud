#include <iostream>
#include <random>
#include <vector>

int main() 
{
	srand((unsigned)time(0));
	/*std::vector <int> vec;
	for (int i = 0; i < 12; i++)
	{
		vec.push_back(rand() % 20 + 1);
		std::cout << vec.at(i) << std::endl;
	}*/
	std::vector <int> roulette(6);
	roulette.at(rand() % 6) = 1;
	bool boom;
	for (int i = 0; i < 6; i++)
	{
		if (roulette.at(i) == 1)
		{
			std::cout << "BOUM" << std::endl;
			break;
		}
		else 
		{
			std::cout << "Click" << std::endl;
		}
	}
}