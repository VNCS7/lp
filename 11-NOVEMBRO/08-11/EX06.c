#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Crie um programa que receba 3 valores A, B e C. Supondo que cada valor seja um dos lados de um tri�ngulo, verifique e informe se estes lados comp�em um tri�ngulo equil�tero, is�sceles ou escaleno, informar se n�o comp�em um tri�ngulo. Permita que o usu�rio utilize este programa por 10 vezes seguidas.
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
				printf("\n\nTri�ngulo Equil�tero.\n\n");
				else 
		
				if(A==B && C!=B || A==C && A!=B || B==C && A!=C)
				printf("\n\nTri�ngulo Is�sceles.\n\n");
				else 
		
				if(A!=B && B!=C)
				printf("\n\nTri�ngulo Escaleno.\n\n");
				else;	
	
			}
			else
			{
				printf("\n\nValores inseridos n�o formam um tri�ngulo. Tente novamente\n\n");	
			}		
	}
return (0);
}
