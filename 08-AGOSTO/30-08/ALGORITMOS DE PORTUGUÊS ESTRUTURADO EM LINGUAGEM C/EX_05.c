#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
/*Desenvola um alogritimo que receba a base e altura de um ret�ngulo, calcule e mostre a sua �rea.*/
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
	printf ("�rea do Ret�ngulo igual a: %.2f \n", r);
	printf("============================================\n");
	printf ("\n");
	system("PAUSE");
}
