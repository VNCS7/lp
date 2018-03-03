#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Crie um programa que receba 3 valores A, B e C. Supondo que cada valor seja um dos lados de um triângulo, verifique e informe se estes lados compõem um triângulo equilátero, isósceles ou escaleno, informar se não compõem um triângulo. Permita que o usuário utilize este programa por 10 vezes seguidas.
//VNCS//
int main() 
{
	float A,B,C;
	int i;
	setlocale(LC_ALL, "Portuguese");
	
	for (i=1;i<=10;i++)
	{
		printf("Insira o valor de A: ");
		scanf("%f",&A);
		printf("Insira o valor de B: ");
		scanf("%f",&B);
		printf("Insira o valor de C: ");
		scanf("%f",&C);

			if (A+B >= C && A+C >= B && B+C >= A)
			{
				if(A==B && B==C)
				printf("\n\nTriângulo Equilátero.\n\n");
				else 
		
				if(A==B && C!=B || A==C && A!=B || B==C && A!=C)
				printf("\n\nTriângulo Isósceles.\n\n");
				else 
		
				if(A!=B && B!=C)
				printf("\n\nTriângulo Escaleno.\n\n");
				else;	
	
			}
			else
			{
				printf("\n\nValores inseridos não formam um triângulo. Tente novamente\n\n");	
			}		
	}
return (0);
}
