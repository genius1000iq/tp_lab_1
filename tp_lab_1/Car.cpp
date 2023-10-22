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
		if(i==0)
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
	
	std::cout << "Car\t\t" << std::endl;
	std::cout << "brand of car\t\t" << brand_of_car << std::endl;
	std::cout << "year of issue\t" << year_of_issue << std::endl;
	std::cout << "model of car\t\t" << model << std::endl;
	std::cout << "count of cars\t" << count_of_cars << std::endl;
	std::cout << "Count of cities\t\t" << count_of_cities << std::endl;
	std::cout << std::endl << std::endl;
	
	Print_all_cities();
}

void Car::SetBrand(std::string data)
{
	brand_of_car = data;
}

void Car::SetModel(std::string data)
{
	model = data;
}

void Car::SetYearOfIssue(int data)
{
	year_of_issue = data;
}

void Car::SetCountOfCars(std::string data)
{
	count_of_cars = data;
}

void Car::SetCountOfCities(int data)
{
	count_of_cities = data;
}

void Car::SetNext(cities_and_extra* data)
{
	cities.next = data;
}


void Car::SetCitiesAndExtra(std::string cit,std::string vol,int hour,int number_of_city)
{
	cities_and_extra* current_city = &cities;
	for (int i = 0; i < number_of_city; i++)
	{
		current_city = current_city->next;		
	}
	current_city->city = cit;
	current_city->volume = vol;
	current_city->hours = hour;
	current_city->next = new(cities_and_extra);

	/*
cities_and_extra* current_city=&cities;
	for (int i = 0; i < count_of_cities; i++)
	{
		std::cout << "Enter name of city"<<std::endl;
		if(i==0)
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
	*/
}

void Car::SetCities(std::string)
{

}

void Car::OutputFile()
{
		std::ofstream out;          // поток для записи
		out.open(path_output, std::ios::app);      // открываем файл для записи
		if (out.is_open())
		{
			out << "1" << "\n";
			out << brand_of_car << "\n";
			out << year_of_issue << "\n";
			out << model << "\n";
			out << count_of_cars << "\n";
			out << count_of_cities << "\n";

			cities_and_extra current_city = cities;
			for (int i = 0; i < count_of_cities; i++)
			{
				out << current_city.city << "\n";
				out << current_city.hours << "\n";
				out << current_city.volume << "\n";
				current_city = *current_city.next;
			}
			std::cout << "Saving complete!" << std::endl;
		}
		else
			std::cout << "Can't find file";
		out.close();
}
