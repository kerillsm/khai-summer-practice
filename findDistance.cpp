#include "pch.h"
#include "findDistance.h"
#include <math.h>

double findDistance(coords a, coords b) {
	return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}
