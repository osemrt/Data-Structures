#pragma once

#include "common.h"

char* createArray(int size);
char* fillArray(int* arr, int size);
void printArray(int* arr, int size);
int swap(int arr[], int index1, int index2);
void selectionSort(int* arr, int size, int order);