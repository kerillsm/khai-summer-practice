#include "pch.h"
#include "math.h"

double findSquare(double hP, double a, double b, double c) {
	return sqrt(hP*(hP - a)*(hP - b)*(hP - c));
}
