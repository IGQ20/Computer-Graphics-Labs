#include <iostream>

int main() {

	//degrees to radians conversion
	float angleInDegrees = 45.0f;
	float pi = 3.1415927f;

	float angleInRadians = angleInDegrees * pi / 180.0f;

	//output results
	std::cout << angleInDegrees << "degrees ie equal to" << angleInRadians << "radians." << std::endl;
}