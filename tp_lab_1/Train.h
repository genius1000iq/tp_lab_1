#pragma once
#include "Cargo.cpp"

class Train: public Cargo 
{
public:
	Train(): 
	Cargo() 
	{};
	~Train() {};
};
