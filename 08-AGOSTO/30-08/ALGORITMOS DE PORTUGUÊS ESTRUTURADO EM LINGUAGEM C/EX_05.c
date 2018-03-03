#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
/*Desenvola um alogritimo que receba a base e altura de um retângulo, calcule e mostre a sua área.*/
/*IF YOUNG METRO DON'T TRUST I'M GON' SHOOT YOU*/
/*THIS CODE WAS MADE BY: VNCS*/
int main(){
	float b,h,r;
	setlocale(LC_ALL, "Portuguese");
	printf ("Digite a Base do retangulo: \n");
	scanf ("%f",&b);
	printf ("Digite a Altura do retangulo: \n");
	scanf ("%f",&h);
	r = b*h;
	printf("============================================\n");
	printf ("Área do Retângulo igual a: %.2f \n", r);
	printf("============================================\n");
	printf ("\n");
	system("PAUSE");
}
