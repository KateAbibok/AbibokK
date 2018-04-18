// 1лаба уп.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Bill
{
public:
	Bill(string name, int number, double sum);
	~Bill();
	void Print();

private:
	string name;
	int number;
	double sum;
};

Bill::Bill(string name, int number, double sum)
{
	this->name = name;
	this->number = number;
	this->sum = sum;
}

Bill::~Bill()
{
}

void Bill::Print() {
	cout << name << endl;
	cout << number << endl;
	cout << sum << endl;
}

int main()
{
	Bill *bill = new Bill("zaxcdvfbghjkl; ",65,5);
	bill->Print();
	cin.get();
	return 0; 
}

