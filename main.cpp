#include "pch.h"
#include "findCoords.h"
#include "findDistance.h"
#include "findAngle.h"
#include "findMedianas.h"
#include "findHalfPerimetr.h"
#include "findSquare.h"
#include "findHeights.h"
#include "findInnerRadius.h"
#include <stdio.h>

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, y1, y2, y3, c1, c2, c3 = 0;
	coords intersection1x2, intersection2x3, intersection1x3;
	double side1x2_2x3, side1x2_1x3, side2x3_1x3;
	double S, hP, r;
	triangleAngles angles;
	triangleMedians medianas;
	triangleHeights heights;

	// Ввод коэфициентов для трёх уравнений
	printf("Коэффициенты I(первой) прямой вида Ax+By+C=0: \n");
	scanf_s("%lf %lf %lf", &x1, &y1, &c1);
	printf("Коэффициенты II(второй) прямой вида A1x+B1y+C1=0: \n");
	scanf_s("%lf %lf %lf", &x2, &y2, &c2);
	printf("Коэффициенты III(третьей) прямой вида A2x+B2y+C2=0: \n");
	scanf_s("%lf %lf %lf", &x3, &y3, &c3);

	// x, y не ввведены
	if ((x1 == 0 && y1 == 0) || (x2 == 0 && y2 == 0) || (x3 == 0 && y3 == 0)) {
		printf("Введёные данные неверны. Чтобы построить треугольник, нужно три прямые");
		exit(0);
	}

	// Нахождение x,y координат пересечения для уравнений
	intersection1x2 = findCoords(x1, y1, c1, x2, y2, c2);
	intersection2x3 = findCoords(x2, y2, c2, x3, y3, c3);
	intersection1x3 = findCoords(x1, y1, c1, x3, y3, c3);

	// Нахождение параметров треугольника:
	// Стороны a, b, c
	side1x2_2x3 = findDistance(intersection1x2, intersection2x3);
	side1x2_1x3 = findDistance(intersection1x2, intersection1x3);
	side2x3_1x3 = findDistance(intersection2x3, intersection1x3);
	// Углы A, B, C
	angles = findAngle(side1x2_2x3, side1x2_1x3, side2x3_1x3);
	// Медианы a, b, c
	medianas = findMedianas(side1x2_2x3, side1x2_1x3, side2x3_1x3);
	// Полупериметр треугольника P
	hP = findHalfPerimetr(side1x2_2x3, side1x2_1x3, side2x3_1x3);
	// Площадь треугольника S
	S = findSquare(hP, side1x2_2x3, side1x2_1x3, side2x3_1x3);
	// Высоты треугольника
	heights = findHeights(S, side1x2_2x3, side1x2_1x3, side2x3_1x3);
	// Радиус вписаной окружности
	r = findInnerRadius(S, hP);

	// Вывод 
	printf("Координаты пересечения: \n");
	printf("Первой I и II прямой: x=%lf y=%lf\n", intersection1x2.x, intersection1x2.y);
	printf("Первой II и III прямой: x=%lf y=%lf\n", intersection2x3.x, intersection2x3.y);
	printf("Первой I и III прямой: x=%lf y=%lf\n", intersection1x3.x, intersection1x3.y);
	printf("Длина сторон \n");
	printf("a: %lf \n", side2x3_1x3);
	printf("b: %lf \n", side1x2_1x3);
	printf("c: %lf \n", side1x2_2x3);
	printf("Углы \n");
	printf("a: %lf \n", angles.a);
	printf("b: %lf \n", angles.b);
	printf("c: %lf \n", angles.c);
	printf("Медианы \n");
	printf("a: %lf \n", medianas.ma);
	printf("b: %lf \n", medianas.mb);
	printf("c: %lf \n", medianas.mc);
	printf("Полупериметр: %lf \n", hP);
	printf("Площадь: %lf \n", S);
	printf("Высоты \n");
	printf("a: %lf \n", heights.ha);
	printf("b: %lf \n", heights.hb);
	printf("c: %lf \n", heights.hc);
	printf("Радиус вписанной окружности %lf \n", r);

	return 0;
}
