#pragma once

#include "common.h"

int insertMax(int arr[], int* size, int value);
void createMax(int arr[], int size);
int deleteMax(int arr[], int size);
int deleteMaxUtil(int arr[], int* size);
int findBigChild(int arr[], int size, int root);
void printArray(int arr[], int size);
void maxHeapSort(int arr[], int size);
void print2D(int arr[], int size, int root, int space);
void print2DUtil(int arr[], int size);
int swap(int arr[], int index1, int index2);
void heapifyUtil(int arr[], int size);
void heapify(int arr[], int size, int root);