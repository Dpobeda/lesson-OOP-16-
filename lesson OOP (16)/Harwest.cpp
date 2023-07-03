#include "Harwest.h"
#include <iostream>
#include <string>

void Harwest::insert()
{
	std::string name;
	std::string color;
	int mass;

	std::cout << "Enter name" << "\n";
	std::getline(std::cin, name);

	std::cout << "Enter color" << "\n";
	std::getline(std::cin, color);

	std::cout << "Enter mass" << "\n";
	std::cin >> mass;

	//Harwest* harwest = new Harwest(name, color, mass);
	//_harwest.push_back(Harwest);
}

void Harwest::ChangePlant()
{
	std::string name;
	std::string color;
	int mass;

	system("cls");

	std::cout << "What do you want? " << "\n";
	std::cout << "1 - Name" << "\n";
	std::cout << "2 - Color" << "\n";
	std::cout << "3 - Mass" << "\n";

	int input;
	std::cin >> input;

	system("cls");

	switch (input)
	{
	case 1: 
		std::cout << "Enter what you want to find, Name ?";
		std::getline(std::cin, name); break;
	case 2:
		std::cout << "Enter what you want to find, Color ?";
		std::getline(std::cin, color); break;
	case 3:
		std::cout << "Enter what you want to find, Mass ?";
		std::cin >> mass; break;

	default:
		break;
	}
}
