#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//*Elabore um algoritmo que leia uma medida em cent�metros e apresente quantos metros, dec�metros e mil�metros h� nesta medida.*//

int main(){
	setlocale(LC_ALL, "Portuguese");
	float cent,met,dec,mili;
	printf ("\n=============CONVERSOR ULTRA AVAN�AD�SSIMO DE MEDIDAS DO VNCS=============\n");
	printf ("\n -> Digite uma medida em cent�metros: ");
	scanf ("%f",&cent);

		met = cent*0.01;
		dec = cent*0.1;
		mili = cent*10;

	printf ("\n=================================================");
	printf ("\n -> %.0f cent�metros em metros ser�:%.2f m",cent, met);
	printf ("\n -> %.0f cent�metros em dec�metros ser�:%.2f dm",cent, dec);
	printf ("\n -> %.0f cent�metros em mil�metros ser�:%.2f mm",cent, mili);
	printf ("\n=================================================\n");
	printf("\n");
	system ("PAUSE");
	return (0);
}
