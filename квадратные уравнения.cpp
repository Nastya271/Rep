#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
int main ()
{ 
	setlocale(LC_CTYPE, "Russian"); 
	double a, b, c, d, x1 = 0, x2 = 0; 
	
	printf("������� ����������� ��� x^2: "); 
	scanf("%Lf", &a); 
	printf ("������� ����������� ��� x: "); 
	scanf("%Lf", &b); 
	printf("������� ����� ��� ������������: ");
	scanf("%Lf", &c); 
	if (a == 0) printf("\n ��������� �� ����� ������! "); 
    	else { 
        	d = pow(b, 2) - 4 * a * c; 
        	if (d < 0) printf("\n ��������� �� ����� ������������ ������! "); 
        	else if (d == 0) { 
				x1 = -b / (2 / a); 
				if (b == 0 && c == 0) x1 = 0; 
				printf(" ��������� ����� ���� ������: x = %Lf", x1); } 
				else { 
					x1 = (-b - sqrt(d)) / (2 * a); 
					x2 = (-b + sqrt(d)) / (2 * a); 
					printf (" ��������� ����� ��� �����: \n x1 = %Lf\n x2 = %Lf" , x1, x2); 
        		} 
   		} 
    getch(); 
    return 0; 
}
