#include "logic.h"

int main() {
	int index;
	cout << "input your index: ";
	cin >> index;

	cout << "the number is " << tribonacci_number(index);

	return 0;
}