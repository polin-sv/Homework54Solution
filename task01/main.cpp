#include "logic.h"

int main() {
	int number;
	cout << "input your number: ";
	cin >> number;

	string msg = is_power_of_four(number) ? "yes" : "no";

	cout << "is " << number 
		<< " power of four?\n" << msg;

	return 0;
}