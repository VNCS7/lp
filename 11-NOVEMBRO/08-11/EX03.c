#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Crie um algoritmo que calcule e apresente a área externa de uma lata, onde é fornecido pelo usuário somente o Raio e Altura.//
//VNCS//
int main() 
{
	float ar,ra,al;
	int i;
	setlocale(LC_ALL, "Portuguese");
	for (i=1;i<=5;i++)
	{
		printf ("Insira o raio da lata: ");
		scanf ("%f", &ra);
		printf ("Insira a altura da lata: ");
		scanf ("%f", &al);
	
			ar = 2*3.14*ra*(ra+al);

		printf ("\n========================================\n");
		printf ("A área da lata %d é igual a: %.1f m² ",i,ar);
		printf ("\n========================================\n\n");
	}

	return (0);
}
