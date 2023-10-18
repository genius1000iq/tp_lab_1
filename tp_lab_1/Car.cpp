#include "Car.h"
void Car::Set()
{
	std::cout << "Enter brand of car" << std::endl;
	getline(std::cin, brand_of_car);
	std::cout << "Enter year of issue" << std::endl;
	std::cin >> year_of_issue;
	std::cout << "Enter model" << std::endl;
	std::cin.get();
	getline(std::cin, model);
	std::cout << "Enter count of cars" << std::endl;
	std::cin >> count_of_cars;
	std::cout << "How many cities car will wisit?" << std::endl;
	std::cin >> count_of_cities;
	if (count_of_cities > 0)
	{
		filling_all_cities(count_of_cities);	
	}
}


void Car::filling_all_cities(int count_of_cities)
{
	cities_and_extra* current_city=&cities;
	for (int i = 0; i < count_of_cities; i++)
	{
		std::cout << "Enter name of city"<<std::endl;
		std::cin.get();
			getline(std::cin, current_city->city);
			std::cout << "Enter hours to this city" << std::endl;
			std::cin >> current_city->hours;
			std::cout << "Volume of cargo for this city" << std::endl;
			std::cin.get();
			getline(std::cin, current_city->volume);
		current_city->next = new(cities_and_extra);
		current_city = current_city->next;
	}
}

void Car::Print_one_city(cities_and_extra what_we_print)
{
	std::cout << "Name of city - " << what_we_print.city << std::endl;
	std::cout << "Hours to this city - " << what_we_print.hours << std::endl;
	std::cout << "Volume of cargo for this city - " << what_we_print.volume << "\n" << std::endl;
}

void Car::Print_all_cities()
{
	std::cout << "\n";
	cities_and_extra current_city = cities;
	for (int i = 0; i < count_of_cities; i++)
	{
		Print_one_city(current_city);
		std::cout << "\n";
		current_city = *current_city.next;
	}
}

void Car::Print()
{
	std::cout << std::endl << std::endl;
	std::cout << "brand of car\t\t" << brand_of_car << std::endl;
	std::cout << "year of issue\t" << year_of_issue << std::endl;
	std::cout << "model of car\t\t" << model << std::endl;
	std::cout << "count of cars\t" << count_of_cars << std::endl;
	std::cout << "Count of cities\t\t" << count_of_cities << std::endl;
	Print_all_cities();
}

int Car::GetVolume()
{
	return(year_of_issue);
}