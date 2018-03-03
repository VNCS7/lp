#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
#include <time.h>
//Crie um algoritmo que receba um número entre 1 e 12 e apresente o mês correspondente
//VNCS\\

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float op;
	ini:
	printf("Insira um número de 1 a 12: ");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1: puts("\nNumero corresponde ao mês de Janeiro."); break;
		case 2: puts("\nNumero corresponde ao mês de Fevereiro."); break;
		case 3: puts("\nNumero corresponde ao mês de Março."); break;
		case 4: puts("\nNumero corresponde ao mês de Abril."); break;
		case 5: puts("\nNumero corresponde ao mês de Maio."); break;
		case 6: puts("\nNumero corresponde ao mês de Junho."); break;
		case 7: puts("\nNumero corresponde ao mês de Julho."); break;
		case 8: puts("\nNumero corresponde ao mês de Agosto."); break;
		case 9: puts("\nNumero corresponde ao mês de Setembro."); break;
		case 10: puts("\nNumero corresponde ao mês de Outubro."); break;
		case 11: puts("\nNumero corresponde ao mês de Novembro."); break;
		case 12: puts("\nNumero corresponde ao mês de Dezembro."); break; 
		default: puts("\nOpção inválida, Tente novamente.\n");
		sleep(10);
		system("CLS");
		goto ini;
	}
	printf("\n");
	system ("PAUSE");
	return (0);
}
