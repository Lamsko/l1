// l1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>

using namespace std;
int main()
{
	double a, b, c, delta, x1, x2;
	printf("Podaj a, b, c\n");
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	scanf_s("%lf", &c);
	delta = b * b - (4 * a * c);
	if (delta < 0)
	{
		printf("Rownanie nie ma rozwiazania.\n");
		return 0;
	}
	if (delta == 0)
	{
		printf("Rownanie ma jedno rozwiazanie:");
		x1 = -b / (2 * a);
		printf(" x = %.2lf\n", x1);
		return 0;
	}
	else
	{
		printf("Rownanie ma dwa rozwiazania:\n");
		x1 = -b - sqrt(delta) / (2 * a);
		x2 = -b + sqrt(delta) / (2 * a);
		printf("x1 = %.2lf x2 = %.2lf\n", x1, x2);
		return 0;
	}
	return 0;
}

