#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Crie um algoritmo que receba dados de 5 pescadores e calcule a multa paga por cada um que ultrapassar a quantidade de quilos estabelecida por lei. A saber: 
//A quantidade de peixe por pessoa é 50 kg.
//A multa por quilo excedente é R$4,00.
//
//VNCS//
int main() 
{
	setlocale(LC_ALL, "Portuguese");
	float qt_kg,mul,qt_ex;
	int i=1;
	do
	{
	printf ("\n-> Inisira quantidade de quilos pescados: ");
	scanf ("%f", &qt_kg);
	
		if (qt_kg>50)
		{
			qt_ex=qt_kg-50;
			mul=qt_ex*4;
			printf ("\n=====================================================================\n");
			printf ("-> Você excedeu o limite em: %.2f kg",qt_ex);
			printf ("\n-> Multa a ser paga será de: R$ %.2f ", mul);
			printf ("\n=====================================================================\n");
		}
		else
		{
			printf ("\n=====================================================================\n");
			printf ("-> Você não excedeu o limite estabelecido por lei.");
			printf ("\n=====================================================================\n\n");
		}
		i++;  
	} while(i<=5);
	system ("PAUSE");
	return (0);
}

