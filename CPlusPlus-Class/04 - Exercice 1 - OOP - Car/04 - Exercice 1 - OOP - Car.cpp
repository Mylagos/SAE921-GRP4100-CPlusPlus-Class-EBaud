#include "Car.h"

#include <iostream>

int main()
{
	Car foMustang;
	Car fiPanda;

	foMustang.setBrand("Ford");
	foMustang.setModel("Mustang");
	foMustang.setYear(1966);

	fiPanda.setBrand("Fiat");
	fiPanda.setModel("Panda");
	fiPanda.setYear(1982);

	foMustang.printCar();
	fiPanda.printCar();
}