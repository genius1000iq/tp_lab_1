#include "Train.h"

void Train::Set()
{
	std::cout << "Enter name of cargo"<< std::endl;
	getline(std::cin, name);
	std::cout << "Enter year of issue"<< std::endl;
	std::cin  >> year_of_issue;
	std::cout << "Enter route"<<std::endl;
	std::cin.get();
	getline(std::cin, route);
	std::cout << "Enter count of cars"<< std::endl;
	std::cin  >> count_of_cars;
	std::cout << "Enter volume of cars"<< std::endl;
	std::cin  >> volume;
}

void Train::Print()
{
	std::cout << "name\t\t"<< name<<std::endl;
	std::cout << "year of issue\t"<< year_of_issue<< std::endl;
	std::cout << "route\t\t"<< route<< std::endl;
	std::cout << "count of cars\t" << count_of_cars << std::endl;
	std::cout << "volume\t\t" << volume<< std::endl;
}

int Train::GetVolume()
{
	return(volume);
}