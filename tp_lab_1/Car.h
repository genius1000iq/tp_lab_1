#pragma once
#include "Cargo.cpp"

class Car : public Cargo
{
public:
	Car() :
	Cargo()
	{
		year_of_issue = 0;
		brand_of_car = NULL;
		model = NULL;
		cities = NULL;
		count_of_cars = 0;
		cities = NULL;
		volume = 0;
	};
	~Car() {};

private:
	int year_of_issue;
	char brand_of_car;
	char model;
	char cities;
	char count_of_cars;
	int volume;
	cities_and_extra* cities;
};

struct cities_and_extra
{
	char city;
	int hours;
	int volume;
	cities_and_extra* next;
};