#pragma once
#include <iostream>
#include <string>


class Plant
{
public:
	std::string _name;
	int _mass;
	std::string _color;

	Plant(std::string name, int mass, std::string color)
	{
		_name = name;
		_mass = mass;
		_color = color;
	}

	void ShowData(std::string name, int mass, std::string color)
	{
		std::cout << "Name: " << name << "\n";
		std::cout << "Ves: " << mass << "\n";
		std::cout << "Color: " << color << "\n";
		std::cout << std::endl;
	}


};
