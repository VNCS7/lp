#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Considerando que um veículo percorre 12 quilômetros com um litro de combustível, mantendo uma velocidade de 80 km/h, e que o custo do combustível é de R$ 3,55 Elabore um programa que apresente o valor a ser desembolsado pelo usuário no combustível, de acordo com o percurso que ele informar//
//VNCS//

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float km,lt_c;

	printf ("-> Insira a quantiade de quilômetros a ser percorrida: ");
	scanf ("%f", &km);
		
		lt_c = km*3.55/12; 
	
	printf ("\n==================================================\n");
	printf ("-> Valor a ser desembolsado será de R$: %.2f", lt_c);
	printf ("\n==================================================\n\n");
	
	
	system ("PAUSE");
	return (0);
}

