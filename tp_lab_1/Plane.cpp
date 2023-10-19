#include "Plane.h"

void Plane::Set()
{
	std::cout << "Enter name of cargo" << std::endl;
	getline(std::cin, name);
	std::cout << "Enter type" << std::endl;
	getline(std::cin, type);
	std::cout << "Enter size" << std::endl;
	getline(std::cin, size);
	std::cout << "Enter cities plane will visit" << std::endl;
	getline(std::cin, cities);
	std::cout << "Enter volume" << std::endl;
	getline(std::cin, volume);
}



int Plane:: GetVolume()
{
	return(1);
}

void Plane::Print()
{
	std::cout << "type\t\t" << type << std::endl;
	std::cout << "name\t\t" << name << std::endl;
	std::cout << "size\t\t" << size << std::endl;
	std::cout << "cities\t\t" << cities << std::endl;
	std::cout << "volume\t\t" << volume << std::endl;
}