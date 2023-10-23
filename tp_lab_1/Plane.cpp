#include "Plane.h"

void Plane::Set()
{
	std::cout << "Enter name of cargo" << std::endl;
	std::cin.get();
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


void Plane::Print()
{
	
	std::cout << "Plane\t\t" <<std::endl;
	std::cout << "type\t\t" << type << std::endl;
	std::cout << "name\t\t" << name << std::endl;
	std::cout << "size\t\t" << size << std::endl;
	std::cout << "cities\t\t" << cities << std::endl;
	std::cout << "volume\t\t" << volume << std::endl;
	std::cout << std::endl << std::endl;
}

void Plane::SetName(std::string data)
{
	name = data;
}

void Plane::SetType(std::string data)
{
	type = data;
}

void Plane::SetSize(std::string data)
{
	size = data;
}

void Plane::SetVolume(std::string data)
{
	volume = data;
}

void Plane::SetCities(std::string data)
{
	cities = data;
}


void Plane::OutputFile()
{
	std::ofstream out;          // поток для записи
	out.open(path_output, std::ios::app);      // открываем файл для записи
	if (out.is_open())
	{
		out << "3" << "\n";
		out << type << "\n";
		out << name << "\n";
		out << size << "\n";
		out << cities << "\n";
		out << volume << "\n";

		std::cout << "Saving complete!" << std::endl;
	}
	else
		std::cout << "Can't find file";
	out.close();
}
