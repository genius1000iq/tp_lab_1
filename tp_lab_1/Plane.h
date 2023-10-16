#pragma once
#include "Cargo.cpp"

class Plain : public Cargo
{
public:
	Plain() :
		Cargo()
	{
		type = NULL;
		name = NULL;
		size = 0;
		cities = NULL;
		volume = 0;
	};
	~Plain() {};

private:
	char type;
	char name;
	char size;
	int volume;
	char cities;
};
