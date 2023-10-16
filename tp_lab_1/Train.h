#pragma once
#include "Cargo.cpp"

class Train: public Cargo 
{
public:
	Train(): 
	Cargo() 
	{
		name= NULL;
		year_of_issue= NULL;
		route= NULL;
		count_of_cars = NULL;
		volume=0;
	};
	~Train() {};

private:
	char name;
	int year_of_issue;
	char route;
	int count_of_cars;
	int volume;
};
