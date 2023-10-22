#pragma once
#define path_output "D:\\studying\\ГУАП\\Технология программирования\\output.txt"
#define path_input "D:\\studying\\ГУАП\\Технология программирования\\input.txt"
#include "string"
#include <iostream>
#include <fstream>
class Cargo
{
public:
	Cargo()
	{
		std::cout << "Cargo is created.\n";
	};
	virtual ~Cargo()
	{

	}
	virtual void SetYearOfIssue(int data)=0;
	virtual void SetBrand(std::string data)=0;
	virtual void SetModel(std::string data)=0;
	virtual void SetCountOfCars(std::string data)=0;
	virtual void SetCountOfCities(int data)=0;
	virtual void SetCities(std::string data)=0;
	virtual void SetVolume(std::string data)=0;
	virtual void SetName(std::string data)=0;
	virtual void SetType(std::string data)=0;
	virtual void SetSize(std::string data)=0;
	virtual void SetCitiesAndExtra(std::string cit, std::string vol, int hour) = 0;
	virtual void SetRoute(std::string data)=0;
	virtual void Set() = 0;
	virtual void SetHours(int data)=0;
	
	virtual void Print() = 0;
	//virtual int GetVolume() = 0;
	virtual void OutputFile() = 0;
	
};