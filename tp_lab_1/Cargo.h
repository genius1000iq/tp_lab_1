#pragma once
#include <iostream>
class Cargo
{
public:
	Cargo();
	virtual ~Cargo();
	virtual void Set() = 0;
	virtual void Get() = 0;
	virtual void Add() = 0;
	virtual void Delete() = 0;
	virtual void Print() = 0;
};