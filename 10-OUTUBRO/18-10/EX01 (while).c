#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA COR DE FUNDO/CARACTERES.
#include <stdio.h> //MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUNÇÕES MATEMÁTICAS.
#include <locale.h>//PERMITE O USO DE ACENTUAÇÕES DA LÍNGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HORÁRIO,TEMPO ETC.
//Crie um algoritmo que controle uma conta poupança que foi aberta com um depósito de R$500,00. Sendo a remuneração de 1% ao mês de juros. A presente o saldo após três meses.//
/*VNCS*/
main ()
{
	setlocale(LC_ALL, "Portuguese");
	float dep=500,sal_at;
	int i=0;
	printf("----------Conta Poupança------------\n\n");
		while(i!=3)
		{
			i++;
			sal_at=dep+(dep*0.01);
			printf("\n====================================");
			printf("\nSaldo do mês %d é: R$ %.2f",i,sal_at);
			dep=sal_at;
		}
	printf("\n====================================\n\n");
	system("PAUSE");
	
}
