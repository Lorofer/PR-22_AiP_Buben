#include "funcs.h"

void tooLazyToName1(Phone* array, int size) {
	cout << "��������, � ������� ����� ��������������� ���������� ��������� �����\n";
	for (int i = 0; i < size; i++) {
		if (array[i].insideTheCity > array[i].maxInsideTheCity) {
			array[i].getData();
		}
	}
}

void tooLazyToName2(Phone* array, int size) {

	cout << "��������, ������� ������������ ��������������� ������\n";
	for (int i = 0; i < size; i++) {
		if (array[i].insideTheCity > 0) {
			array[i].getData();
		}
	}
}

void tooLazyToName3(Phone* array, int size) {

	cout << "�������� ��� ���� ���������\n";
	for (int i = 0; i < size; i++) {
		array[i].getData();
	}
}