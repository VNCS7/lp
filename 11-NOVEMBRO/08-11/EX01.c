#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Refa�a o algoritmo para calcular 5 equa��es do 2� grau, levando em considera��o a an�lise da exist�ncia do X1 e X2 //
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
				printf("\n-> Erro! Delta menor/igual a zero, equa��o n�o p�de ser continuada");
			}
			else
			{
				printf("\n-> X� �: %.1f & X� �: %.1f",x1,x2);	
			}
	}
	return (0);
}
