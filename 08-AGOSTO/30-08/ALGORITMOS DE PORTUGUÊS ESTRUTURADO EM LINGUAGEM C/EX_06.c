#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
/*Crie um algoritimo que receba o ano de nascimento de uma pessoa. Calcule e mostre
a idade atual e quantos anos essa pessoa terá em 2050*/
/*IF YOUNG METRO DON'T TRUST I'M GON' SHOOT YOU*/
/*THIS CODE WAS MADE BY: VNCS*/
int main(){
	int id_atual,id_2050,an_nasc,an_atual;
	setlocale(LC_ALL, "Portuguese");
	printf ("Insira o ano atual: \n");
	scanf ("%d", &an_atual);
	printf ("Insira o ano de nascimento: \n");
	scanf ("%d", &an_nasc);
	id_atual = an_atual - an_nasc;
	id_2050 = 2050-an_nasc;
	printf("============================================\n");
	printf ("Idade atual: %d",id_atual);
	printf ("\n");
	printf ("Idade em 2050: %d",id_2050);
	printf("\n============================================\n");
	printf ("\n");
	system("PAUSE");
}
