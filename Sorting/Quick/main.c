#include "header_files/declarations.h"

int main() {

	srand(time(NULL));
	int size = rand() % MAX_SIZE;
	size = 10;
	int* arr = createArray(size);
	fillArray(arr, size);
	printArray(arr, size);

	

	return 0;
}