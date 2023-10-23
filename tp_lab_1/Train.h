#pragma once
#include "Cargo.cpp"
class Train: public Cargo 
{
public:

	Train()
	{
		
	};
	~Train() {};

	Train(const Train& other) {
		name = other.name;
		year_of_issue = other.year_of_issue;
		route = other.route;
		count_of_cars = other.count_of_cars;
		volume = other.volume;
	}

	friend std::ostream& operator<<(std::ostream& os, const Train& train) {
		os << "Train\t\t" << std::endl;
		os << "name\t\t" << train.name << std::endl;
		os << "year of issue\t" << train.year_of_issue << std::endl;
		os << "route\t\t" << train.route << std::endl;
		os << "count of cars\t" << train.count_of_cars << std::endl;
		os << "volume\t\t" << train.volume << std::endl;
		os << std::endl << std::endl;
		return os;
	}

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
	void SetCitiesAndExtra(std::string cit, std::string vol, int hour, int number_of_city) {}
	
	void Print();
	
private:
	std::string name;
	int year_of_issue;
	std::string route;
	std::string count_of_cars;
	std::string volume;
};
