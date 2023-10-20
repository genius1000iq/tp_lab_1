#include "Keeper.h"


void Keeper::Add() {
    std::cout << "What type of cargo do you want to add?" << std::endl;
    std::string type_of_cargo;
    std::cout << "You can choose car, plane, or train.\n>";
    getline(std::cin, type_of_cargo);

    Cargo* new_item = nullptr;
    if (type_of_cargo == "car" || type_of_cargo == "Car") {
        new_item = new Car;
    }
    else if (type_of_cargo == "train" || type_of_cargo == "Train") {
        new_item = new Train;
    }
    else if (type_of_cargo == "plane" || type_of_cargo == "Plane") {
        new_item = new Plane;
    }
    else {
        std::cout << "Error\n";

        return; // Выход из функции после рекурсии Add()
    }

    new_item->Set();
    array_of_items[count_of_items] = new_item;
   
    count_of_items++;
}

void Keeper::Print() 
{
    for (int i = 0; i < count_of_items; i++) 
    {
        array_of_items[i]->Print();
    }
}

//void Keeper::Add()
//{
//	std::cout << "What type of cargo you want to add?" << std::endl;
//	std::string type_of_cargo;
//	std::cout << "You can choose car, plane or train.\n>";
//	getline(std::cin, type_of_cargo);
//
//	Cargo* new_item = NULL;
//
//	if (type_of_cargo == "car" || type_of_cargo == "Car")
//	{
//		Car new_car;
//		new_car.Set();
//		new_item = new(Car);
//		new_item = &new_car;
//	}
//	else if (type_of_cargo == "train" || type_of_cargo == "Train")
//	{
//		Train new_train;
//		new_train.Set();
//		new_item = new(Train);
//		new_item = &new_train;
//	}
//	else if (type_of_cargo == "plane" || type_of_cargo == "Plane")
//	{
//		Plane new_plane;
//		new_plane.Set();
//		new_item = new(Plane);
//		new_item = &new_plane;
//	}
//	else
//	{
//		std::cout << "Error\n";
//		Add();
//	}
//
//}

void Keeper::Del(int number_of_item)
{

}

void Keeper::Change(int number_of_item)
{

}