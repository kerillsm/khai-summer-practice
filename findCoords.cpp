#include "pch.h"
#include "findCoords.h"

coords findCoords(double x1, double y1, double c1, double x2, double y2, double c2) {
	double det = y1 * x2 - x1 * y2;
	double resultX = (c1 * y2 - y1 * c2) / det;
	double resultY = (x1 * c2 - c1 * x2) / det;
	return { resultX, resultY };
}
