#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
#include <time.h>
//Escrever um programa para apresentar o nome do lanche do MacDonalds conforme o n� dVoc� selecionou: pelo cliente (usu�rio): 
//1. BigMac 
//2. Quarteir�o 
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
	printf("\nMENU DE OP��ES:");
	printf("\n===================");
	sleep(1);
	printf("\n1. BigMac\n2. Quarteir�o\n3. MacChicken\n4. Cheddar MacMelt\n5. MacMax");
	printf("\n===================");
	printf("\n\n--------------------------");
	printf("\nDigite op��o desejada: ");
	scanf("%d",&op);
	sleep(1);
	switch(op)
	{
		case 1: puts("\nVoc� selecionou: BigMac."); break;
		case 2: puts("\nVoc� selecionou: Quarteir�o."); break;
		case 3: puts("\nVoc� selecionou: MacChicken."); break;
		case 4: puts("\nVoc� selecionou: Cheddar MacMelt."); break;
		case 5: puts("\nVoc� selecionou: MacMax."); break;
		default: puts("\nOp��o Inv�lida. \nPor favor selecione uma op��o v�lida");
		sleep(2);
		system("CLS");
		goto ini;
	}
	printf("--------------------------");
	puts("\n");
	system ("PAUSE");
	return (0);
}
