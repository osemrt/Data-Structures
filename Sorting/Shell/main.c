#include "declarations.h"

int main() {

	srand(time(NULL));
	int size = rand() % MAX_SIZE;
	int* arr = createArray(size);
	fillArray(arr, size);
	printArray(arr, size);

	shellSort(arr, size, ASCENDING_ORDER);
	printArray(arr, size);

	shellSort(arr, size, DESCENDING_ORDER);
	printArray(arr, size);





	return 0;
}