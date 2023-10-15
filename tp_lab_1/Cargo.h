#pragma once
#include <iostream>
class Cargo
{
public:
	Cargo();
	~Cargo();
	void Set();
	int Get();
protected:
	int volume;
};