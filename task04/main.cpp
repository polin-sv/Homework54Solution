#include "logic.h"

int main() {
	int width = 1680;
	int height = 640;

	int result = get_squares(width, height);

	cout << "width: " << width << "\nheight: " << height;

	cout << "\nthe answer is " << to_string(result) 
		<< " squares" << endl;

	return 0;
}