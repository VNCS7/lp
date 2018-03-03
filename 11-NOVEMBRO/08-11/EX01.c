#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Refaça o algoritmo para calcular 5 equações do 2º grau, levando em consideração a análise da existência do X1 e X2 //
//VNCS//
int main() 
{
	setlocale(LC_ALL, "Portuguese");
	float del,x1,x2,a,b,c;
	int i;
	
	for (i=1;i<=5;i++)
	{
		printf ("\n=====================================================================\n\n");
		printf ("-> Digite o valor de A: ");
		scanf ("%f", &a);
		printf ("-> Digite o valor de B: ");
		scanf ("%f", &b);
		printf ("-> Digite o valor de C: ");
		scanf ("%f", &c);
		
			del= (pow(b,2))-(4*a*c);
			x1= (-b+(sqrt(del)))/2*a;
			x2= (-b-(sqrt(del)))/2*a;
	
			if (del<=0)	
			{
				printf("\n-> Erro! Delta menor/igual a zero, equação não pôde ser continuada");
			}
			else
			{
				printf("\n-> X¹ é: %.1f & X² é: %.1f",x1,x2);	
			}
	}
	return (0);
}
