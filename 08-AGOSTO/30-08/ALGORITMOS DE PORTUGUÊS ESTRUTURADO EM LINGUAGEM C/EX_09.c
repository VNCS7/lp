#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>

/*Crie um algoritmo que calcule o sal�rio l�quido sabendo que A cada um dependente
este recebe R$ 300,00 de b�nus. O valor do seu sal�rio bruto �: Valor Hora * Horas trabalhadas no m�s. A aplica��o ir� coletar o n�mero de dependentes,
Valor hora, Hora trabalhada e apresentar� o Valor bruto e o Valor l�quido.*/
/*IF YOUNG METRO DON'T TRUST I'M GON' SHOOT YOU*/
/*THIS WAS MADE BY: VNCS*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float sl_bru,sl_liq,vl_hr;
	int n_dep,hr_tra;
	printf ("Insira o numero de dependentes: \n");
	scanf ("%d",& n_dep);
	printf ("Insira o valor da hora trabalhada: \n");
	scanf ("%f",& vl_hr);
	printf ("Insira a quantidade de horas trabalhadas no mes: \n");
	scanf ("%d",& hr_tra);
	sl_bru = (vl_hr*hr_tra);
	sl_liq = (n_dep*300)+sl_bru;
	printf("\n============================================\n");
	printf ("\Sal�rio Bruto: R$ %.2f", sl_bru);
	printf ("\n");
	printf ("Sal�rio L�quido: R$ %.2f", sl_liq);
	printf("\n============================================\n");
	printf("\n");
	system("PAUSE");
}
