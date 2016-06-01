#include <stdio.h>
#include "lib.h"

int Quadratic_equation(float a, float b, float c, float *x1, float *x2)
{
	float d = b * b - (4 * a * c);
	
	if (d < 0)
	{
		printf("No solutions.");
		return 0;
	}
	if (d == 0)
	{
		*x1 = -b / (2 * a);
		return 1;
	}
	if (d > 0)
	{
		*x1 =  -b + sqrt(d) / (2 * a);
		*x2 =  -b - sqrt(d) / (2 * a);
		return 2;
	}
}
