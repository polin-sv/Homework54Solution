#include "logic.h"

int get_squares(int width, int height) {
	if (width % height == 0) {
		return height;
	}

	return get_squares(height, width % height);
}