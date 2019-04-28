#include "header_files/declarations.h"

void merge(int* arr, int l, int mid, int h) {

	int size = h - l + 1;
	int* _arr = (int*)malloc(sizeof(int) * size);
	if (_arr == NULL) {
		return;
	}

	int i = l;			//left side
	int j = mid + 1;	//right side
	int k = 0;			//_arr

	while ((i <= mid) && (j <= h)) {

		if (arr[i] > arr[j]) {
			_arr[k++] = arr[i++];
		}
		else {
			_arr[k++] = arr[j++];
		}
	}

	while (i <= mid) {
		_arr[k++] = arr[i++];
	}
	while (j <= h) {
		_arr[k++] = arr[j++];
	}

	//Let's move the new array to the original array
	for (i = l, k = 0; i <= h; i++, k++) {
		arr[i] = _arr[k];
	}

	free(_arr);

}