//Make a circle with OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Task is to create a Circle constructor that creates a circle with a radius provided by an argument. 
//The circles constructed must have two getters find_area() (PIr^2) and find_circum() (2PI*r) which give both respective areas and perimeter (circumference).

#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	circle one(4);

	cout << "Area of the circle is: " << one.find_area() << endl;
	cout << "Circumference of the circle is: " << one.find_circum() << endl;

}

