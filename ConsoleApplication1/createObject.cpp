#include "createObject.h"

Phone createObject() {
	cout << "\n";
	std::cin.ignore();

	string surname;
	cout << "����� �������: ";
	getline(cin, surname);

	string name;
	cout << "����� ���: ";
	getline(cin, name);

	string fraternity;
	cout << "����� ��������: ";
	getline(cin, fraternity);

	string address;
	cout << "����� �����: ";
	getline(cin, address);

	string phoneNumber;
	cout << "����� ����� ��������: ";
	getline(cin, phoneNumber);

	int insideTheCity;
	cout << "����� ����� ��������� ����������: ";
	cin >> insideTheCity;

	int outsideTheCity;
	cout << "����� ����� �������������� ����������: ";
	cin >> outsideTheCity;

	int maxInsideTheCity;
	cout << "\n����� ����� ��������� ����������: ";
	cin >> maxInsideTheCity;

	return Phone(surname, name,
		fraternity, address,
		phoneNumber, insideTheCity,
		outsideTheCity, maxInsideTheCity);
}