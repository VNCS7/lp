#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA COR DE FUNDO/CARACTERES.
#include <stdio.h> //MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUN«’ES MATEM¡TICAS.
#include <locale.h>//PERMITE O USO DE ACENTUA«’ES DA LÕNGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR¡RIO,TEMPO ETC.
//Desenvolva um algoritmo que receba a base e altura de um ret√¢ngulo, calcule e mostre sua √°rea, repita 10 com valores diferentes.//
/*VNCS*/
main ()
{
	setlocale(LC_ALL, "Portuguese");
	float b,a,r;
	int i=1;
		printf("==================================================");

		while(i<=10)
		{
		printf ("\nInsira a base do Ret‚ngulo: ");
		scanf ("%f", &b);
		printf ("Insira a altura do Ret‚ngulo: ");
		scanf ("%f", &a);

		r=b*a;
		printf("\n==================================================\n");
		printf("\¡rea do ret‚ngulo %d È: %.2f", i,r);
		printf("\n==================================================\n");
		i++;
		}

		if(i>10)
		{
			printf("\nEste progama suporta somente 10 c·lculos simult‚neos. \nEncerrando.\n\n");
			system("PAUSE");
			return(0);
			i=10;
		}
		else;
	system("PAUSE");
	return(0);

}
