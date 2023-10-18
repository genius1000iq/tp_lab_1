#pragma once
#include "Cargo.cpp"

struct cities_and_extra
{

	char city;
	int hours;
	int volume;
	cities_and_extra* next;
};

class Car : public Cargo
{
public:
	Car()
	{
		year_of_issue = 0;
		brand_of_car = NULL;
		model = NULL;
		cities.city = NULL;
		cities.hours = 0;
		cities.volume = 0;
		cities.next = 0;
		count_of_cars = 0;
		total_volume = 0;
	};
	~Car() {};

private:
	int year_of_issue;
	char brand_of_car;
	char model;
	char count_of_cars;
	int total_volume;
	cities_and_extra cities;
};

