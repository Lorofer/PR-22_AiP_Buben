#include <iostream>
#include <Windows.h>

#include "Phone.h"
#include "createObject.h"
#include "funcs.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int numOfSubscribers;
	cout << "Введи количество абонентов: ";
	cin >> numOfSubscribers;

	Phone* array = new Phone[numOfSubscribers];
	for (int i = 0; i < numOfSubscribers; i++) {
		array[i] = createObject();
	}

	int action;
	cout << "Выберите желаемое действие:\n"
		<< "1. Показать абонентов, у которых время внутригородских разговоров превышает лимит\n"
		<< "2. Показать абонентов, которые пользовались внутригородской связью\n"
		<< "3. Показать сведения обо всех абонентах"
		<< "0. Выход\n\n"
		<< "Ваш выбор: ";
	cin >> action;
	cout << "\n";

	switch (action) {
	case 1:
		tooLazyToName1(array, numOfSubscribers);
		break;

	case 2:
		tooLazyToName2(array, numOfSubscribers);
		break;

	case 3:
		tooLazyToName3(array, numOfSubscribers);
		break;
	}


	return 0;
}