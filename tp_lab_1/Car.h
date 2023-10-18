#pragma once
#include "Cargo.cpp"

struct cities_and_extra
{
	std::string city;
	int hours;
	std::string volume;
	cities_and_extra* next;
};

class Car : public Cargo
{
public:
	Car()
	{
		year_of_issue = 0;
		brand_of_car;
		model;
		cities.city;
		cities.hours = 0;
		cities.volume;
		cities.next = 0;
		count_of_cars = 0;
	};
	~Car() {};
	void Set();
	int GetVolume();
	void Add();
	void Delete();
	void Print();
	void Print_all_cities();
	void Print_one_city(cities_and_extra what_we_print);
private:
	int year_of_issue;//
	std::string brand_of_car;//
	std::string model;//
	int count_of_cars;//
	int count_of_cities;//
	cities_and_extra cities;
	void filling_all_cities(int count_of_cities);
	void filling_one_city(cities_and_extra what_we_fill);
};

