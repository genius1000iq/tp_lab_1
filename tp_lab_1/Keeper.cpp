#include "Keeper.h"

void Keeper::Add()
{
	std::cout << "What type of cargo you want to add?" << std::endl;
	std::string type_of_cargo;
	std::cout << "You can choose car, plane or train.\n>";
	getline(std::cin, type_of_cargo);

	

	if (type_of_cargo == "car" || type_of_cargo == "Car")
	{
		Car new_item;
		new_item.Set();

		Element* new_element=&one_item;
		for (int i = 0; i < counter_of_items; i++)
		{
			new_element = new_element->next_item;
		}

		new_element->item = &new_item;
		counter_of_items++;
	}
	else if (type_of_cargo == "train" || type_of_cargo == "Train")
	{
		Train new_item;
		new_item.Set();

		Element* new_element = &one_item;
		for (int i = 0; i < counter_of_items; i++)
		{
			new_element = new_element->next_item;
		}

		new_element->item = &new_item;
		counter_of_items++;
	}
	else if (type_of_cargo == "plane" || type_of_cargo == "Plane")
	{
		Plane new_item;
		new_item.Set();
		
		Element* new_element = &one_item;
		for (int i = 0; i < counter_of_items; i++)
		{
			new_element = new_element->next_item;
		}

		new_element->item = &new_item;
		counter_of_items++;
	}
	else
	{
		std::cout << "Error\n";
		Add();
	}


}

void Keeper::Print()
{

}

void Keeper::Del(int number_of_item)
{

}

void Keeper::Change(int number_of_item)
{

}