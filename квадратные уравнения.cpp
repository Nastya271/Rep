#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
int main ()
{ 
	setlocale(LC_CTYPE, "Russian"); 
	double a, b, c, d, x1 = 0, x2 = 0; 
	
	printf("Введите коэффициент при x^2: "); 
	scanf("%Lf", &a); 
	printf ("Введите коэффициент при x: "); 
	scanf("%Lf", &b); 
	printf("Введите число без коэффициента: ");
	scanf("%Lf", &c); 
	if (a == 0) printf("\n Уравнение не имеет корней! "); 
    	else { 
        	d = pow(b, 2) - 4 * a * c; 
        	if (d < 0) printf("\n Уравнение не имеет вещественных корней! "); 
        	else if (d == 0) { 
				x1 = -b / (2 / a); 
				if (b == 0 && c == 0) x1 = 0; 
				printf(" Уравнение имеет один корень: x = %Lf", x1); } 
				else { 
					x1 = (-b - sqrt(d)) / (2 * a); 
					x2 = (-b + sqrt(d)) / (2 * a); 
					printf (" Уравнение имеет два корня: \n x1 = %Lf\n x2 = %Lf" , x1, x2); 
        		} 
   		} 
    getch(); 
    return 0; 
}
