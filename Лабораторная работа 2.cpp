#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{ 
	double a, b, c, d, x1 = 0, x2 = 0; 
	
	printf("Input A: "); 
	scanf("%Lf", &a); 
	printf ("Input B: "); 
	scanf("%Lf", &b); 
	printf("Input C:: ");
	scanf("%Lf", &c); 
	if (a == 0) printf("\n The equation has no roots! "); 
    	else { 
        	d = pow(b, 2) - 4 * a * c; 
        	if (d < 0) printf("\n The equation has no real roots! "); 
        	else if (d == 0) { 
				x1 = -b / (2 / a); 
				if (b == 0 && c == 0) x1 = 0; 
				printf(" The equation has one root: x = %Lf", x1); } 
				else { 
					x1 = (-b - sqrt(d)) / (2 * a); 
					x2 = (-b + sqrt(d)) / (2 * a); 
					printf (" The equation has two roots: \n x1 = %Lf\n x2 = %Lf" , x1, x2); 
        		} 
   		} 
    getch(); 
    return 0; 
}
