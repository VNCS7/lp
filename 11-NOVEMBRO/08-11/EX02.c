#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Fa�a um algoritmo para calcular o volume de 10 esferas de raio R, em que R � um valor fornecido pelo usu�rio.//
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
		printf("\nVolume da esfera %d �: %.2f",i,v);
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	}	
	return (0);
}
