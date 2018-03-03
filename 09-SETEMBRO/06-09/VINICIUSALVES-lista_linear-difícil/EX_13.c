#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//*Construa um algoritmo para calcular e apresentar X1 e X2 da equação do 2º grau, sendo que os valores de A, B e C são fornecidos pelo usuário.*//

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float del,x1,x2,a,b,c;
	printf ("=============ULTRA AVANÇADÍSSIMO EQUACIONADOR DO 2º GRAU=============\n\n");
	printf ("-> Digite o valor de A: ");
	scanf ("%f", &a);
	printf ("-> Digite o valor de B: ");
	scanf ("%f", &b);
	printf ("-> Digite o valor de C: ");
	scanf ("%f", &c);
		
		del= (pow(b,2))-(4*a*c);
		x1= (-b+(sqrt(del)))/2*a;
		x2= (-b-(sqrt(del)))/2*a;
	
	if (del<=0)
		printf("\n-> Erro! Delta menor/igual a zero, equação não pôde ser continuada");
	else
		printf("\n-> X¹ é: %.1f & X² é: %.1f",x1,x2);	
	
	printf ("\n\n=====================================================================\n\n");
	
	system ("PAUSE");
	return (0);
}
