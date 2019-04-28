#pragma once

#include "common.h"

int* createArray(int size);
int* fillArray(int* arr, int size);
void printArray(int* arr, int size);
int swap(int arr[], int index1, int index2);

void mergeSort(int* arr, int l, int h);
void merge(int* arr, int l, int mid, int h);

