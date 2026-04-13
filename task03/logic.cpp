#include "logic.h"

int binary_search(int array[], int number, int left, int right) {

	if (left > right) {
		return -1;
	}

	int mid = left + (right - left) / 2;

	if (array[mid] == number) {
		return mid;
	}

	return array[mid] > number ? binary_search(array, number, left, mid - 1) 
		: binary_search(array, number, mid + 1, right);
}