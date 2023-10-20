#pragma once
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
	virtual void Set() = 0;
	virtual void Print() = 0;
	virtual int GetVolume() = 0;
	/*virtual void Add() = 0;
	virtual void Delete() = 0;
	virtual void Print() = 0;*/
};