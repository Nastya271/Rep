#include <stdio.h>
#include <math.h>
#include <conio.h>

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
		printf("X = &f\n", x1);
	if (count == 2)
		printf("X1 = &f\nX2 = %f\n", x1, x2);

	return 0; 
}
