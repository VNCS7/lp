#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA COR DE FUNDO/CARACTERES.
#include <stdio.h> //MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUN��ES MATEM�TICAS.
#include <locale.h>//PERMITE O USO DE ACENTUA��ES DA L�NGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR�RIO,TEMPO ETC.
//Crie um algoritmo que controle uma conta poupanA�a que foi aberta com um depAlsito de R$500,00. Sendo a remuneraA�ALo de 1% ao mASs de juros. A presente o saldo apAls trASs meses.//
/*VNCS*/
main ()
{
	setlocale(LC_ALL, "Portuguese");
	float dep=500,sal_at;
	int mes_cont;
	printf("----------Conta Poupan�a------------\n\n");
		for(mes_cont=1; mes_cont<=3; mes_cont++)
		{
			sal_at=dep+(dep*0.01);
			printf("====================================");
			printf("\n Saldo m�s %d: R$ %.2f\n",mes_cont,sal_at);
			dep=sal_at;
		}
	printf("\n====================================\n");
	system ("PAUSE");
	return (0);
}

