#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
#include <time.h>
//Crie um programa que receba 3 valores A, B e C. 
//Supondo que cada valor seja um dos lados de um tri�ngulo, verifique e informe se estes lados comp�em um tri�ngulo equil�tero, is�sceles ou escaleno.
//informar se n�o comp�em um tri�ngulo.
//VNCS\\

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A,B,C;
	ini:
	printf("Insira o valor de A: ");
	scanf("%f",&A);
	printf("Insira o valor de B: ");
	scanf("%f",&B);
	printf("Insira o valor de C: ");
	scanf("%f",&C);
	if (A+B >= C && A+C >= B && B+C >= A)//VERIFICA SE OS VALORES DIGITADOS FORMAM UM TRI�NGULO//
	{
		if(A==B && B==C)
			printf("\nTri�ngulo Equil�tero.\n");
		else 
		
		if(A==B && C!=B || A==C && A!=B || B==C && A!=C)
			printf("\nTri�ngulo Is�sceles.\n");
		else 
		
		if(A!=B && B!=C)
		printf("\nTri�ngulo Escaleno.\n");
		else;	
	
	}
	else
	{
		printf("\nValores inseridos n�o formam um tri�ngulo. Tente novamente\n");
		sleep(1);//DELAY DE UM SENGUNDO, PARA QUE A MENSAGEM POSSA SER LIDA, ANTES DA TELA SER LIMPA
		system ("CLS");//LIMPA A TELA
		goto ini;//RETORNA PARA O IN�CIO DO ALGORITIMO
	}	
	
	system ("PAUSE");
	return (0);
}
