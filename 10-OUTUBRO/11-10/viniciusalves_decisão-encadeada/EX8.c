#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
#include <time.h>
//Crie um programa que receba 3 valores A, B e C. 
//Supondo que cada valor seja um dos lados de um triângulo, verifique e informe se estes lados compõem um triângulo equilátero, isósceles ou escaleno.
//informar se não compõem um triângulo.
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
	if (A+B >= C && A+C >= B && B+C >= A)//VERIFICA SE OS VALORES DIGITADOS FORMAM UM TRIÂNGULO//
	{
		if(A==B && B==C)
			printf("\nTriângulo Equilátero.\n");
		else 
		
		if(A==B && C!=B || A==C && A!=B || B==C && A!=C)
			printf("\nTriângulo Isósceles.\n");
		else 
		
		if(A!=B && B!=C)
		printf("\nTriângulo Escaleno.\n");
		else;	
	
	}
	else
	{
		printf("\nValores inseridos não formam um triângulo. Tente novamente\n");
		sleep(1);//DELAY DE UM SENGUNDO, PARA QUE A MENSAGEM POSSA SER LIDA, ANTES DA TELA SER LIMPA
		system ("CLS");//LIMPA A TELA
		goto ini;//RETORNA PARA O INÍCIO DO ALGORITIMO
	}	
	
	system ("PAUSE");
	return (0);
}
