#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
/*Crie um algoritimo que controle uma conta poupan�a que foi aberta
com um dep�sito de R$500,00. Sendo a remunera��o de 1% ao m�s de juros. Apresente o saldo ap�s tr�s meses*/
/*IF YOUNG METRO DON'T TRUST I'M GON' SHOOT YOU*/
/*THIS CODE WAS MADE BY: VNCS*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float sal_ini,qt_mes,sal_mes1,sal_mes2,sal_mes3;
	sal_ini = 500;
	sal_mes1 = (sal_ini)+(sal_ini*0.01);
	sal_mes2 = (sal_mes1)+(sal_mes1*0.01);
	sal_mes3 = (sal_mes2)+(sal_mes2*0.01);
	printf ("Seu saldo ap�s tr�s meses ser� de: \n");
	printf ("\nSaldo no m�s 1: R$ %.2f \n", sal_mes1);
	printf ("Saldo no m�s 2: R$ %.2f \n", sal_mes2);
	printf ("Saldo no m�s 3: R$ %.2f \n", sal_mes3);
	printf("\n");
	system("PAUSE");
}
