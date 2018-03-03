#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA CORDE FUNDO/CARACTERES.
#include <stdio.h>//MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUN«’ES MATEM√ÅTICAS.
#include <locale.h>//PERMITE O USO DE ACENTUA«’ES DA L√çNGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR¡ÅRIO,TEMPO ETC.
#include <windows.h>//EMULA JANELAS.
//Crie um programa que receba duas dadas: Dia1/MÍs1/Ano1 e Dia2/MÍs2/Ano2 , efetue a comparaÁ„o e apresente-as em ordem crescente.
//VNCS//
int main() 
{
	int d1,m1,a1,d2,m2,a2;
	setlocale(LC_ALL, "Portuguese");
	printf ("INSIRA A PRIMEIRA DATA\n");
	sleep(1);
	printf("\nInsira o dia: ");
	scanf("%d",&d1);
	printf("Insira o mÍs: ");
	scanf("%d",&m1);
	printf("Insira o ano: ");
	scanf("%d",&a1);
	printf("\n==================================\n");
	printf ("INSIRA A SEGUNDA DATA\n");
	sleep(1);
	printf("\nInsira o dia: ");
	scanf("%d",&d2);
	printf("Insira o mÍs: ");
	scanf("%d",&m2);
	printf("Insira o ano: ");
	scanf("%d",&a2);

		if (a1==a2 && m1==m2 && d1==d2)
		{
			printf("\nDatas s„o iguais, por favor insira datas diferentes.\n\n");
			sleep(2);
			return(0);
			//system("CLS");

		}
		else

		if(a1>a2)
			printf("\nDatas em ordem crescente: %d/%d/%d/ || %d/%d/%d.\n",d2,m2,a2,d1,m2,a1);
		else
			printf("\nDatas em ordem crescente: %d/%d/%d || %d/%d/%d.\n",d1,m1,a1,d2,m2,a2);

		if(a1==a2)
		{
			if(m1>m2)
				printf ("\nDatas em ordem crescente: %d/%d/%d || %d/%d/%d.\n",d2,m2,a2,d1,m1,a1);
			else
				printf ("\nDatas em ordem crescente: %d/%d/%d || %d/%d/%d.\n",d1,m1,a1,d2,m2,a2);

			if (m1==m2)
			{
				if(d1>d2)
					printf("\nDatas em ordem crescente: %d/%d/%d || %d/%d/%d.\n",d2,m2,a2,d1,m1,a1);
				else
					printf("\nDatas em ordem crescente: %d/%d/%d || %d/%d/%d.\n",d1,m1,a1,d2,m2,a2);
			}
		}
		else
	system ("PAUSE");
	return (0);
}
