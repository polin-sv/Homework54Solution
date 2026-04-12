#include "logic.h"

int recursion(int index) {
	if (index == 3) {
		return 1;
	}

	if (index == 1
		|| index == 2) {
		return 0;
	}

	return recursion(index - 1) + 
		recursion(index - 2) + recursion(index - 3);
}

int tribonacci_number(int index) {
	if (index <= 0) {
		return -1;
	}

	return recursion(index);
}