#pragma once
#include "Cargo.cpp"

class Plane : public Cargo
{
public:
	Plane()
	{
		
	};
	~Plane() {};
	void Set();
	//int GetVolume();
	void Print();
	void OutputFile();
	void SetCities(std::string data);
	void SetName(std::string data);
	void SetType(std::string data);
	void SetSize(std::string data);
	void SetVolume(std::string data);
	void SetHours(int data){}
	void SetCitiesAndExtra(std::string cit, std::string vol, int hour, int number_of_city) {}
	virtual void SetYearOfIssue(int data) {}
	virtual void SetBrand(std::string data) {}
	virtual void SetModel(std::string data){}
	virtual void SetCountOfCars(std::string data){}
	virtual void SetCountOfCities(int data){}
	virtual void SetRoute(std::string data){}


private:
	std::string type;
	std::string name;
	std::string size;
	std::string volume;
	std::string cities;
};
