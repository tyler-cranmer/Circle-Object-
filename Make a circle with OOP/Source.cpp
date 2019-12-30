#include "Header.h"
#include <cmath>


float circle::find_radius() {

	return radius;
}

float circle::find_area() {

	area = 3.14 * pow(find_radius(), 2.0);

	return area;
}

float circle::find_circum() {

	circum = 2 * 3.14 * find_radius();
	return circum;
}

circle::circle(float new_radius)

	: radius(new_radius) {}