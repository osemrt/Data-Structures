#include "declarations.h"

int main() {

	//array_1
	int maxHeap_arr1[MAX];
	int size_arr1 = 0;

	//array_2
	int maxHeap_arr2[] = { 10,39,21,53,102,83,1,83 };
	int size_arr2 = 8;

	//array_3
	int maxHeap_arr3[] = { 123,637,542,130,329,211,453,102,823,541,783,999 };
	int size_arr3 = 12;

	//array_4
	int maxHeap_arr4[] = { 758,297,583,200,365,511,86,510,229,785,910,343,59,557,59 };
	int size_arr4 = 15;
	
	
	print2DUtil(maxHeap_arr2, 8); 
	printf("\n-----------------\n");
	
	print2DUtil(maxHeap_arr1, size_arr1);
	printf("\n-----------------\n");
	
	insertMax(maxHeap_arr1, &size_arr1, 150);
	insertMax(maxHeap_arr1, &size_arr1, 39);
	insertMax(maxHeap_arr1, &size_arr1, 30);
	insertMax(maxHeap_arr1, &size_arr1, 23);
	insertMax(maxHeap_arr1, &size_arr1, 72);
	insertMax(maxHeap_arr1, &size_arr1, 60);

	print2DUtil(maxHeap_arr1, size_arr1);
	printf("\n-----------------\n");

	print2DUtil(maxHeap_arr1, size_arr1);
	printf("\n-----asdasd------------\n");
	
	deleteMaxUtil(maxHeap_arr1, &size_arr1);
	print2DUtil(maxHeap_arr1, size_arr1);
	printf("\n-----------------\n");
	
	deleteMaxUtil(maxHeap_arr1, &size_arr1);
	print2DUtil(maxHeap_arr1, size_arr1);
	printf("\n-----------------\n");
	
	deleteMaxUtil(maxHeap_arr1, &size_arr1);
	print2DUtil(maxHeap_arr1, size_arr1);
	printf("\n-----------------\n");
	
	deleteMaxUtil(maxHeap_arr1, &size_arr1);
	print2DUtil(maxHeap_arr1, size_arr1);
	printf("\n-----------------\n");
	
	deleteMaxUtil(maxHeap_arr1, &size_arr1);
	print2DUtil(maxHeap_arr1, size_arr1);
	printf("\n-----------------\n");
	
	createMax(maxHeap_arr2, size_arr2);
	print2DUtil(maxHeap_arr2, size_arr2);
	printf("\n-------Before----------\n");
	
	printArray(maxHeap_arr3, size_arr3);
	printf("\n--------After---------\n");

	maxHeapSort(maxHeap_arr3, size_arr3);
	printArray(maxHeap_arr3, size_arr3);
	printf("\n-----------------\n");
	
	print2DUtil(maxHeap_arr4, size_arr4);
	printf("\n-----------------\n");

	heapifyUtil(maxHeap_arr4, size_arr4); 
	print2DUtil(maxHeap_arr4, size_arr4);
	printf("\n-----------------\n");	

	return 0;
}

