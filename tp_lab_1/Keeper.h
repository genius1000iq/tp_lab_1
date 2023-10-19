#pragma once
#include "Cargo.h"
#include "Car.h"
#include "Train.h"
#include "Plane.h"


struct Element
{
	Cargo* item;
	Element* next_item;
};

class Keeper
{
public:
	void Add();
	void Del(int number_of_item);
	void Change(int number_of_item);
	void Print();

	Keeper()
	{
		counter_of_items = 0;
	}

	~Keeper()
	{}

private:
	Element one_item;
	int counter_of_items;
};