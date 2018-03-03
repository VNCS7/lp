#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//*Crie um algoritmo que calcule e apresente a área externa de uma lata, onde é fornecido pelo usuário somente o Raio e Altura.*//


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float ar,ra,al;
		printf ("==========CÁLCULO DE ÁREA DE UM CILINDRO==========");
	printf ("\n\nInsira o raio da lata: ");
	scanf ("%f", &ra);
	printf ("Insira a altura da lata: ");
	scanf ("%f", &al);
	
		ar = 2*3.14*ra*(ra+al);
	
	printf ("\n========================================\n");
	printf ("A área da lata é igual a: %.1f m² ", ar);
	printf ("\n========================================\n");
	return (0);
	system ("PAUSE");
}

