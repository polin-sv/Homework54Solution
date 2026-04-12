#include "logic.h"

bool is_power_of_four(int number) {
	if (number <= 0) {
		return false;
	}
	if (number == 1) {
		return true;
	}

	return is_power_of_four(number / 4);
}