#include "header_files/declarations.h"

int main() {

	srand(time(NULL));
	int size = rand() % MAX_SIZE;
	int* arr = createArray(size);
	fillArray(arr, size);
	printArray(arr, size);

	quickSort(arr, 0, size - 1);
	printArray(arr, size);

	

	return 0;
}