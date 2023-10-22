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
		
	};
	~Car() {};
	void Set();
	//int GetVolume();
	void Print();
	void OutputFile();

	void SetYearOfIssue(int data);
	void SetBrand(std::string data);
	void SetModel(std::string data);
	void SetCountOfCars(std::string data);
	void SetCountOfCities(int data);

	
	void SetName(std::string data){}
	void SetType(std::string data){}
	void SetSize(std::string data){}
	void SetRoute(std::string data){}

	void SetCities(std::string data);
	void SetCitiesAndExtra(std::string cit, std::string vol, int hour, int number_of_city);
	void SetVolume(std::string data) {};
	void SetHours(int data) {};
	void SetNext(cities_and_extra* data);
	

	void Print_all_cities();
	void Print_one_city(cities_and_extra what_we_print);
private:
	int year_of_issue;//
	std::string brand_of_car;//
	std::string model;//
	std::string count_of_cars;//
	int count_of_cities;//
	cities_and_extra cities;

	void filling_all_cities(int count_of_cities);
	
};

