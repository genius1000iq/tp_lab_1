#pragma once
#include "Cargo.h"
#include "Car.h"
#include "Train.h"
#include "Plane.h"

class Keeper
{
private:
	Cargo** array_of_items;
	int count_of_items;

public:
	void Add();
	void Del(int number_of_item);
	void Change(int number_of_item);
	void Print();

	Keeper()
	{
		count_of_items = 0;
		array_of_items = new Cargo * [count_of_items+1];
	}

	Keeper(int counter_of_elements)
	{
		count_of_items = counter_of_elements;
		array_of_items = new Cargo * [count_of_items];
	}

	Keeper(const Keeper& other)
	{
		this->array_of_items = new Cargo * [other.count_of_items];
		this->count_of_items = other.count_of_items;

		for (int i = 0; i < this->count_of_items; i++)
		{
			this->array_of_items[i] = other.array_of_items[i];
		}
	}

	~Keeper()
	{
		std::cout << "destructor Keeper" << std::endl;
		delete array_of_items;
	}


};