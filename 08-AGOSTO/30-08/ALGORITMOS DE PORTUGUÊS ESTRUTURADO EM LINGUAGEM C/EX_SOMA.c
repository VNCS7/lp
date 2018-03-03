#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
/*Crie um algoritimo que leia um valor X e um Valor N, calcule apresente o resultado de (X*N)². */
/*IF YOUNG METRO DON'T TRUST I'M GON' SHOOT YOU*/
/*THIS CODE WAS MADE BY: VNCS*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	float a,b,r;
	printf ("Insira o 1º Número: \n");
	scanf ("%f",&a);
	printf ("Insira o 2º Número: \n");
	scanf ("%f",&b);
	printf("\n============================================\n");
	r= a+b;
	printf ("O resultado é igual a: %.2f \n", r);
	printf ("============================================\n");
	printf ("\n");
	system("PAUSE");
}

