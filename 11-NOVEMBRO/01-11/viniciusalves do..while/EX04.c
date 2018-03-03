#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Elabore um algoritmo que leia 10 medidas diferentes em centímetros e apresente quantos metros, decímetros e milímetros há nesta medida.//
//VNCS//
int main() 
{
setlocale(LC_ALL, "Portuguese");
	float cent,met,dec,mili;
	int i=1;
	do
	{
	printf ("\n -> Digite uma medida em centímetros: ");
	scanf ("%f",&cent);

		met = cent*0.01;
		dec = cent*0.1;
		mili = cent*10;

	printf ("\n=================================================");
	printf ("\n -> %.0f centímetros em metros será:%.2f m",cent, met);
	printf ("\n -> %.0f centímetros em decímetros será:%.2f dm",cent, dec);
	printf ("\n -> %.0f centímetros em milímetros será:%.2f mm",cent, mili);
	printf ("\n=================================================\n");
	printf("\n");
	i++;
	} while(i<=10);
	system ("PAUSE");
	return (0);
}
