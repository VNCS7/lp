#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA COR DE FUNDO/CARACTERES.
#include <stdio.h> //MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUN��ES MATEM�TICAS.
#include <locale.h>//PERMITE O USO DE ACENTUA��ES DA L�NGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR�RIO,TEMPO ETC.
//Crie um algoritmo que controle uma conta poupan�a que foi aberta com um dep�sito de R$500,00. Sendo a remunera��o de 1% ao m�s de juros. A presente o saldo ap�s tr�s meses.//
/*VNCS*/
main ()
{
	setlocale(LC_ALL, "Portuguese");
	float dep=500,sal_at;
	int i=0;
	printf("----------Conta Poupan�a------------\n\n");
		while(i!=3)
		{
			i++;
			sal_at=dep+(dep*0.01);
			printf("\n====================================");
			printf("\nSaldo do m�s %d �: R$ %.2f",i,sal_at);
			dep=sal_at;
		}
	printf("\n====================================\n\n");
	system("PAUSE");
	
}
