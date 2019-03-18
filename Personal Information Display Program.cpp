// Personal Information Display Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// C++ Programming exercise " Displaying Personal Informaiton"
// Author: Steven Love

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name = "Captain Jonathan Archer";
	string address = "Captain's Quarters";
	string city = "San Francisco";
	string state = "California";
	int zipCode =  94102;


	// Display user personal information
	cout << " Your name is :" << name << '\n';
	cout << " Your address is :" << address << '\n';
	cout << " Your city is :" << city << '\n';
	cout << " Your state is :" << state << '\n';
	cout << " Your zipcode is :" << zipCode << '\n';


	
	system("pause");


}

