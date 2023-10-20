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
	int GetVolume();
	void Add();
	void Delete();
	void Print();

private:
	std::string name;
	int year_of_issue;
	std::string route;
	int count_of_cars;
	int volume;
};
