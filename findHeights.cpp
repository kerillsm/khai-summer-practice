#include "pch.h"
#include "findHeights.h"

triangleHeights findHeights(double S, double a, double b, double c) {
	double ha, hb, hc;
	ha = 2 * S / a;
	hb = 2 * S / b;
	hc = 2 * S / c;
	return {ha, hb, hc};
}
