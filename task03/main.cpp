#include "logic.h"

int main() {
	int size = 10;
	int left = 0;
	int right = size - 1;

	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int number;
	cout << "input your number from 1 to 10: ";
	cin >> number;

	int result = binary_search(array, number, left, right);

	cout << "your number is found at index: " << to_string(result);

	return 0;
}