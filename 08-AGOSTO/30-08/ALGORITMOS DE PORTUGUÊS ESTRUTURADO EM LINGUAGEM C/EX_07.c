#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
/*Crie um Algoritimo para calcular a �rea do tri�ngulo, apresente o resultado*/
/*IF YOUNG METRO DON'T TRUST I'M GON' SHOOT YOU*/
/*THIS CODE WAS MADE BY: VNCS*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float b,h,r;
	printf ("Insira a base do tri�ngulo: \n");
	scanf ("%f",&b);
	printf ("Insira a altura do tri�ngulo: \n");
	scanf ("%f",&h);
	r = b*h/2;
	printf("\n============================================\n");
	printf ("Area do tri�ngulo � igual a: %.2f", r);
	printf("\n============================================\n");		
	printf ("\n");
	system("PAUSE");
}
