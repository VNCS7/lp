#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Crie um algoritmo para calcular a área de 8 triângulos, apresente cada resultado.//
//VNCS//
int main() 
{
	setlocale(LC_ALL, "Portuguese");
	float b,h,r;
	int i=1;
	do
	{
	printf ("Insira a base do triângulo:	");
	scanf ("%f",&b);
	printf ("Insira a altura do triângulo:	");
	scanf ("%f",&h);
	r = b*h/2;
	printf("\n============================================\n");
	printf ("Area do triângulo %d é igual a: %.2f",i, r);
	printf("\n============================================\n");		
	printf ("\n");
	i++;
	} while(i<=8);
	system ("PAUSE");
	return (0);
}
