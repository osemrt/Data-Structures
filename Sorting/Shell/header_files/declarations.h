#pragma once

#include "common.h"

int* createArray(int size);
int* fillArray(int* arr, int size);
void printArray(int* arr, int size);
void shellSort(int* arr, int size, int order);