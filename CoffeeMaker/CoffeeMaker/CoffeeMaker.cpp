// CoffeeMaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <iostream>

class Maker
{
	int maxCoffeeToMake;

	float currentWater; //Need .5 Liters
	float maxWater;

	float currentCoffee;
	float maxCoffee;

	

	float GroundedBeans; //Need 25 Beans

public: 
	float nonGroundedBeans;


	void MakeCoffee(int coffeeToMake)
	{
		int localCoffeeCount;
		if (maxCoffeeToMake >= coffeeToMake)
		{
			localCoffeeCount = coffeeToMake;
		}
		else
		{
			localCoffeeCount = maxCoffeeToMake;
		}
	}

	void FillUpWater(int water)
	{
		if (water + currentWater > maxWater)
		{
			currentWater = maxWater;
		}
		else
		{
			currentWater += water;
		}
	}

	void FillUpHopper(int groundedBeans)
	{

	}
};


class Grinder
{
public:
	int GrindBeans(int BeansToGrind)
	{
		int groundedBeans;

		return groundedBeans;
	}
};



int main()
{
    std::cout << "Hello World!\n"; 
	Maker CoffeeMaker;
	Grinder grinder;

	int input;

	switch (input)
	{
	case 1: //Make Coffee
		CoffeeMaker.MakeCoffee(1);
	case 2: //Grind Beans
		grinder.GrindBeans(CoffeeMaker.nonGroundedBeans);
	case 3: //Fill Up Water
		CoffeeMaker.FillUpWater(1);
	case 4: //Put Beans in Hopper
	default:
		break;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
