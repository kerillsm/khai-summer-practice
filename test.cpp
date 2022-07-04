#include "pch.h"
#include "findCoords.h"

TEST(findCoords, shouldCorrectReturn) {
	coords result = findCoords(1, 2, 3, 4, 5, 6);
	EXPECT_EQ(-1, result.x);
	EXPECT_EQ(2, result.y);
}
