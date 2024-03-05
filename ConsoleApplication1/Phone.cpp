#include "Phone.h"

Phone::Phone() {}
Phone::Phone(string surname, string name,
	string fraternity, string address,
	string phoneNumber, int insideTheCity,
	int outsideTheCity, int maxInsideTheCity) {


	this->surname = surname;
	this->name = name;
	this->fraternity = fraternity;
	this->address = address;
	this->phoneNumber = phoneNumber;
	this->insideTheCity = insideTheCity;
	this->outsideTheCity = outsideTheCity;
	this->maxInsideTheCity = maxInsideTheCity;
}

void Phone::getData() {

	cout << "\nФИО - " << surname << " "
		<< name << " " << fraternity << "\n"
		<< "Адрес - " << address << "\n"
		<< "Номер телефона - " << phoneNumber << "\n"
		<< "Время внутрених разговоров - " << insideTheCity << "\n"
		<< "Время межгородских разговоров - " << outsideTheCity << "\n";
}