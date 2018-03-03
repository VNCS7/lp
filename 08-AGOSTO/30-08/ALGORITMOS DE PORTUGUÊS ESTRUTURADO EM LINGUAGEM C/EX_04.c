#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>

/*Crie um algoritimo que leia um valor X e um Valor N, calcule apresente o resultado de (X*N)ï¿½. */
/*IF YOUNG METRO DON'T TRUST I'M GON' SHOOT YOU*/
/*THIS CODE WAS MADE BY: VNCS*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	float x,n,r,r_f;
	printf ("Insira o valor de X: \n");
	scanf ("%f",&x);
	printf ("Insira o valor de N: \n");
	scanf ("%f",&n);
	printf ("\n");
	printf("============================================\n");
	r= pow(x*n,2);
	printf ("O resultado é igual a: %.2f \n", r);
	printf ("============================================\n");
	printf ("\n");
	system("PAUSE");
}
