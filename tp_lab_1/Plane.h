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
	int GetVolume();
	void Print();
private:
	std::string type;
	std::string name;
	std::string size;
	std::string volume;
	std::string cities;
};
