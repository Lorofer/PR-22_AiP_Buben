#pragma once

#include <iostream>
#include <string>

using namespace std;

class Phone {
private:
	string surname;
	string name;
	string fraternity;
	string address;
	string phoneNumber;

public:
	int insideTheCity;
	int outsideTheCity;
	int maxInsideTheCity;

	Phone();
	Phone(string surname, string name,
		string fraternity, string address,
		string phoneNumber, int insideTheCity,
		int outsideTheCity, int maxInsideTheCity);

	void getData();
};