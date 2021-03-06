// CoffeeMaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <iostream>

class Maker
{
	int maxCoffeeToMake;

	double currentWater = 0; //Need .5 Liters
	double maxWater;

	float currentCoffee;
	float maxCoffee;

	

	

public: 
	float nonGroundedBeans;
	int currentGroundedBeans = 0; //Need 25 Beans
	int maxGroundedBeans = 0;


	void MakeCoffee(int coffeeToMake)
	{
		int localCoffeeCount;
		if (currentWater >= .5f * coffeeToMake && currentGroundedBeans >= 25 * coffeeToMake)
		{
			if (maxCoffeeToMake >= coffeeToMake)
			{
				localCoffeeCount = coffeeToMake;
			}
			else
			{
				localCoffeeCount = maxCoffeeToMake;
			}

			std::cout << "Enjoy Your Coffee";
		}
		else
		{
			std::cout << "Not Enough Resources to Make That Much Coffee" << std::endl;
			
			std::cout << "Current Grounded Coffee is " << currentGroundedBeans << std::endl;
			std::cout << "Current Water is " << (int)currentWater << std::endl;
		}
		
	}

	void FillUpWater(double water)
	{
		std::cout << water << std::endl;
		if (water + currentWater > maxWater)
		{
			currentWater = maxWater;
		}
		else
		{
			currentWater += water;
		}

		std::cout << "Current water level is " << currentWater << std::endl;
	}

	void FillUpHopper(int groundedBeans)
	{
		if (groundedBeans + currentGroundedBeans > maxGroundedBeans)
		{
			currentGroundedBeans = maxGroundedBeans;
		}
		else
		{
			currentGroundedBeans += groundedBeans;
		}
	}
};


class Grinder
{
public:
	int GrindBeans(int BeansToGrind)
	{

		return BeansToGrind;
	}
};



int main()
{
    
	Maker CoffeeMaker;
	Grinder grinder;

	int input = 0;
	bool continueInput = true;
	int localInput = 0;
	

	do {
		Restart:
		std::cout << "Press 1 to Make Coffee" << std::endl;
		std::cout << "Press 2 to Grind Beans" << std::endl;
		std::cout << "Press 3 to Put Water in the Coffee Maker" << std::endl;
		
		std::cin >> input;
		switch (input)
		{
			
		case 1: //Make Coffee
			std::cout << "How Many Cups of Coffee Do You Want To Make?" << std::endl;
			std::cin >> localInput;
			CoffeeMaker.MakeCoffee(localInput);
			goto Restart;
		case 2: //Grind Beans
			std::cout << "How Many Beans Will You be Grinding" << std::endl;
			std::cin >> localInput;
			CoffeeMaker.currentGroundedBeans += grinder.GrindBeans(localInput);
			std::cout << "Current Grounded Beans Are " + CoffeeMaker.currentGroundedBeans << std::endl;
			goto Restart;
		case 3: //Fill Up Water
			std::cout << "How Much Water Will You add to the Hopper" << std::endl;
			std::cin >> localInput;
			CoffeeMaker.FillUpWater(localInput);
			goto Restart;
		default:
			continueInput = false;
			break;
		}
	} while (continueInput);

	std::cout << "Turning Off Coffee Maker";
	std::cin >> input;
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
