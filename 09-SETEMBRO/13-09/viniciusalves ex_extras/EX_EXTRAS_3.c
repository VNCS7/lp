#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Considerando que um ve�culo percorre 12 quil�metros com um litro de combust�vel, mantendo uma velocidade de 80 km/h, e que o custo do combust�vel � de R$ 3,55 Elabore um programa que apresente o valor a ser desembolsado pelo usu�rio no combust�vel, de acordo com o percurso que ele informar//
//VNCS//

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float km,lt_c;

	printf ("-> Insira a quantiade de quil�metros a ser percorrida: ");
	scanf ("%f", &km);
		
		lt_c = km*3.55/12; 
	
	printf ("\n==================================================\n");
	printf ("-> Valor a ser desembolsado ser� de R$: %.2f", lt_c);
	printf ("\n==================================================\n\n");
	
	
	system ("PAUSE");
	return (0);
}

