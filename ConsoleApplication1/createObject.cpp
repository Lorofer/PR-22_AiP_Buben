#include "createObject.h"

Phone createObject() {
	cout << "\n";
	std::cin.ignore();

	string surname;
	cout << "¬веди фамилию: ";
	getline(cin, surname);

	string name;
	cout << "¬веди им€: ";
	getline(cin, name);

	string fraternity;
	cout << "¬веди отчество: ";
	getline(cin, fraternity);

	string address;
	cout << "¬веди адрес: ";
	getline(cin, address);

	string phoneNumber;
	cout << "¬веди номер телефона: ";
	getline(cin, phoneNumber);

	int insideTheCity;
	cout << "¬веди врем€ внутрених разговоров: ";
	cin >> insideTheCity;

	int outsideTheCity;
	cout << "¬веди врем€ междугородский разговоров: ";
	cin >> outsideTheCity;

	int maxInsideTheCity;
	cout << "\n¬веди лимит внутрених разговоров: ";
	cin >> maxInsideTheCity;

	return Phone(surname, name,
		fraternity, address,
		phoneNumber, insideTheCity,
		outsideTheCity, maxInsideTheCity);
}