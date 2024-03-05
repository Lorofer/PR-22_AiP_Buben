#include "funcs.h"

void tooLazyToName1(Phone* array, int size) {
	cout << "Абоненты, у которых время внутригородских разговоров превышает лимит\n";
	for (int i = 0; i < size; i++) {
		if (array[i].insideTheCity > array[i].maxInsideTheCity) {
			array[i].getData();
		}
	}
}

void tooLazyToName2(Phone* array, int size) {

	cout << "Абоненты, которые пользовались внутригородской связью\n";
	for (int i = 0; i < size; i++) {
		if (array[i].insideTheCity > 0) {
			array[i].getData();
		}
	}
}

void tooLazyToName3(Phone* array, int size) {

	cout << "Сведения обо всех абонентах\n";
	for (int i = 0; i < size; i++) {
		array[i].getData();
	}
}