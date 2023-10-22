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
	getline(std::cin, count_of_cars);
	std::cout << "Enter volume of cars"<< std::endl;
	getline(std::cin, volume);
}

void Train::Print()
{
	std::cout << "Train\t\t" << std::endl;
	std::cout << "name\t\t"<< name<<std::endl;
	std::cout << "year of issue\t"<< year_of_issue<< std::endl;
	std::cout << "route\t\t"<< route<< std::endl;
	std::cout << "count of cars\t" << count_of_cars << std::endl;
	std::cout << "volume\t\t" << volume<< std::endl;
	std::cout << std::endl << std::endl;
}


void Train::OutputFile()
{
	std::ofstream out;          // поток для записи
	out.open(path_output, std::ios::app);      // открываем файл для записи
	if (out.is_open())
	{
		out << "2" << "\n";
		out << name << "\n";
		out << year_of_issue << "\n";
		out << route << "\n";
		out << count_of_cars << "\n";
		out << volume << "\n";
		std::cout << "Saving complete!"<<std::endl;
	}
	else
		std::cout << "Can't find file";
	out.close();
}

void Train:: SetName(std::string data)
{
	name = data;
}

void Train::SetYearOfIssue(int data)
{
	year_of_issue = data;
}

void Train::SetRoute(std::string data)
{
	route = data;
}

void Train::SetCountOfCars(std::string data)
{
	count_of_cars = data;
}

void Train::SetVolume(std::string data)
{
	volume = data;
}

