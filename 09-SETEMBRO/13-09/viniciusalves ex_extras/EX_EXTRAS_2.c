#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Elabore um programa que leia dois valores inteiros (A e B), e ao final do processamento apresente os valores trocados//
//VNCS//
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int a,b,c;
	printf ("-> Insira o valor de A: ");
	scanf ("%d", &a);
	printf ("-> Insira o valor de B: ");
	scanf ("%d", &b);
	
		c=a;
		a=b;
		b=c;
	
	printf ("\n============================================\n");
	printf ("-> Valor de A é: %d \n",a);
	printf ("-> Valor de B é: %d \n",b);
	printf ("============================================\n\n");
	
	system ("PAUSE");
	return (0);
}

