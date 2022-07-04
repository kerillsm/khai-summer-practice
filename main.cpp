#include "pch.h"
#include "findCoords.h"
#include <stdio.h>

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, y1, y2, y3, c1, c2, c3 = 0;
	coords direct1_2, direct2_3, direct1_3;

	// ���� ������������ ��� ��� ���������
	printf("������������ I(������) ������ ���� Ax+By+C=0: \n");
	scanf_s("%lf %lf %lf", &x1, &y1, &c1);
	printf("������������ II(������) ������ ���� A1x+B1y+C1=0: \n");
	scanf_s("%lf %lf %lf", &x2, &y2, &c2);
	printf("������������ III(�������) ������ ���� A2x+B2y+C2=0: \n");
	scanf_s("%lf %lf %lf", &x3, &y3, &c3);
	// ���������� x,y ��������� ����������� ��� ���������
	direct1_2 = findCoords(x1, y1, c1, x2, y2, c2);
	direct2_3 = findCoords(x2, y2, c2, x3, y3, c3);
	direct1_3 = findCoords(x1, y1, c1, x3, y3, c3);
	// ���������� ���������� ������������ ��� ������ ���������: ������� a, b, c ���� A, B, C ������� a, b, c ������ a, b, c ������� ������������ S		������������ ������������ P


	return RUN_ALL_TESTS();
}
