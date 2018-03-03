#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
#include <time.h>
//Escrever um programa para apresentar o nome do lanche do MacDonalds conforme o nº dVocê selecionou: pelo cliente (usuário): 
//1. BigMac 
//2. Quarteirão 
//3. MacChicken 
//4. Cheddar MacMelt 
//5. MacMax 
//VNCS\\

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int op;
	ini:
	printf("===================");
	printf("\nMENU DE OPÇÕES:");
	printf("\n===================");
	sleep(1);
	printf("\n1. BigMac\n2. Quarteirão\n3. MacChicken\n4. Cheddar MacMelt\n5. MacMax");
	printf("\n===================");
	printf("\n\n--------------------------");
	printf("\nDigite opção desejada: ");
	scanf("%d",&op);
	sleep(1);
	switch(op)
	{
		case 1: puts("\nVocê selecionou: BigMac."); break;
		case 2: puts("\nVocê selecionou: Quarteirão."); break;
		case 3: puts("\nVocê selecionou: MacChicken."); break;
		case 4: puts("\nVocê selecionou: Cheddar MacMelt."); break;
		case 5: puts("\nVocê selecionou: MacMax."); break;
		default: puts("\nOpção Inválida. \nPor favor selecione uma opção válida");
		sleep(2);
		system("CLS");
		goto ini;
	}
	printf("--------------------------");
	puts("\n");
	system ("PAUSE");
	return (0);
}
