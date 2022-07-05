#include "pch.h"
#include "findCoords.h"
#include "findDistance.h"
#include "findAngle.h"
#include "findMedianas.h"
#include "findHalfPerimetr.h"
#include "findSquare.h"
#include "findHeights.h"
#include "findInnerRadius.h"

TEST(findCoords, shouldCorrectReturn) {
	coords result = findCoords(1, 2, 3, 4, 5, 6);
	EXPECT_EQ(1, result.x);
	EXPECT_EQ(-2, result.y);
}

TEST(findDistance, shouldCorrectReturn) {
	double result = findDistance({ 0, 2 }, { 0, 5 });
	EXPECT_EQ(3, result);
}

TEST(findAngle, shouldCorrectReturnEqualSides) {
	triangleAngles result = findAngle(7, 7, 7);
	EXPECT_EQ(60, result.a);
	EXPECT_EQ(60, result.b);
	EXPECT_EQ(60, result.c);
}

TEST(findAngle, shouldCorrectReturn) {
	triangleAngles result = findAngle(3, 4, 5);
	EXPECT_EQ(36.8699, result.a);
	EXPECT_EQ(53.13010, result.b);
	EXPECT_EQ(90, result.c);
}

TEST(findMedianas, shouldCorrectReturn) {
	triangleMedians result = findMedianas(3, 4, 5);
	EXPECT_EQ(4.272, result.ma);
	EXPECT_EQ(3.60555, result.mb);
	EXPECT_EQ(2.5, result.mc);
}

TEST(findHalfPerimter, shouldCorrectReturn) {
	double result = findHalfPerimetr(3, 4, 5);
	EXPECT_EQ(6, result);
}

TEST(findSquare, shouldCorrectReturn) {
	double result = findSquare(6, 3, 4, 5);
	EXPECT_EQ(6, result);
}

TEST(findHeights, shouldCorrectReturn) {
	triangleHeights result = findHeights(6, 3, 4, 5);
	EXPECT_EQ(4, result.ha);
	EXPECT_EQ(3, result.hb);
	EXPECT_EQ(2.4, result.hc);
}

TEST(findInnerRadius, shouldCorrectReturn) {
	double result = findInnerRadius(20, 10);
	EXPECT_EQ(2, result);
}
