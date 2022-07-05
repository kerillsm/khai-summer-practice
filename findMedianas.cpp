#include "pch.h"
#include "findMedianas.h"
#include "math.h"

triangleMedians findMedianas(double a, double b, double c) {
	double ma, mb, mc;
	ma = 0.5 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2));
	mb = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2));
	mc = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2));
	return {ma, mb, mc};
}
