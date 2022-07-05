#include "pch.h"
#include "findAngle.h"
#include "math.h"

triangleAngles findAngle(double a, double b, double c) {
	double angle_a, angle_b, angle_c;
	double PI = atan(1) * 4;
	angle_a = acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b)) * 180.0 / PI;
	angle_b = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c)) * 180.0 / PI;
	angle_c = 180 - (angle_a + angle_b);
	return { angle_a, angle_b, angle_c };
}
