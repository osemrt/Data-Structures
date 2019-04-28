#pragma once

#include "common.h"

int* createArray(int size);
int* fillArray(int* arr, int size);
void printArray(int* arr, int size);
int swap(int arr[], int index1, int index2);

void quickSort(int arr[], int first, int last);
int partition(int arr[], int l, int r);
