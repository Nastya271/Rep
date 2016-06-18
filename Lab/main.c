#include <stdio.h>
#include "lib.h"
#include <math.h>

int main ()
{
	float a, b, c;
	float x1, x2;
	int count = 0;
	
	printf("Input A: ");
	scanf("%f", &a); 
	printf ("Input B: "); 
	scanf("%f", &b); 
	printf("Input C: ");
	scanf("%f", &c); 
	
	count = Quadratic_equation(a, b, c, &x1, &x2);
	if (count == 1)
		printf("X = %f\n", x1);
	if (count == 2)
		printf("X1 = %f\nX2 = %f\n", x1, x2);

	return 0; 
}
