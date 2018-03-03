#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//*Escreva um algoritmo que leia um valor em segundos e apresente quantas horas e quantos minutos esse valor corresponde.*//

int main(){
	setlocale(LC_ALL, "Portuguese");
	float seg,hor,min;
	printf ("\n=============CONVERSOR ULTRA AVANÇADÍSSIMO DE MEDIDAS DO VNCS=============\n");
	printf ("\n -> Digite um valor em segundos: ");
	scanf ("%f",&seg);
		
		hor = seg/3600;
		min = seg/60;
		
	printf ("\n======================================================");
	printf ("\n -> %.0f segundos em horas será: %.4f hora(s)",seg, hor);
	printf ("\n -> %.0f segundos em minutos será: %.1f minutos(s)",seg, min);
	printf ("\n======================================================\n");
	printf("\n");
	system ("PAUSE");
	return (0);
}
