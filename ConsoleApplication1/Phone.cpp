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

	cout << "\n��� - " << surname << " "
		<< name << " " << fraternity << "\n"
		<< "����� - " << address << "\n"
		<< "����� �������� - " << phoneNumber << "\n"
		<< "����� ��������� ���������� - " << insideTheCity << "\n"
		<< "����� ������������ ���������� - " << outsideTheCity << "\n";
}