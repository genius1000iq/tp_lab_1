#pragma once
#include "Cargo.cpp"
class Train: public Cargo 
{
public:

	Train()
	{
		
	};
	~Train() {};
	void Set();
	//int GetVolume();
	void OutputFile();
	void SetCities(std::string data){}
	void SetName(std::string data);
	void SetYearOfIssue(int data);
	void SetCountOfCars(std::string data);
	void SetVolume(std::string data);
	void SetBrand(std::string data) {}
	void SetModel(std::string data){}
	void SetCountOfCities(int data){}
	void SetType(std::string data){}
	void SetSize(std::string data){}
	void SetRoute(std::string data);
	void SetHours(int data){}
	void SetCitiesAndExtra(std::string cit, std::string vol, int hour){}
	
	void Print();
	
private:
	std::string name;
	int year_of_issue;
	std::string route;
	std::string count_of_cars;
	std::string volume;
};
