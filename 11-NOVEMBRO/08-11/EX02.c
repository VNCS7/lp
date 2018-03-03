#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Faça um algoritmo para calcular o volume de 10 esferas de raio R, em que R é um valor fornecido pelo usuário.//
//VNCS//
int main() 
{
	float r,v;
	int i;
	setlocale(LC_ALL, "Portuguese");
	
	for (i=1;i<=10;i++)
	{
		printf ("Digite o valor do raio: ");
		scanf ("%f",&r);
		
			v = 4*3.14*(pow(r,3))/3;
			
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf("\nVolume da esfera %d é: %.2f",i,v);
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	}	
	return (0);
}
