#include "declarations.h"

int main() {

	srand(time(NULL));
	int size = rand() % MAX_SIZE;
	int* arr = createArray(size);
	fillArray(arr, size);
	printArray(arr, size);

	selectionSort(arr, size, ASCENDING_ORDER);
	printArray(arr, size);

	selectionSort(arr, size, DESCENDING_ORDER);
	printArray(arr, size);

	return 0;
}