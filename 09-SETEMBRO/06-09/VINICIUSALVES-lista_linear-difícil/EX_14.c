#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//*Fa�a um algoritmo para calcular o volume de uma esfera de raio R, em que R � um valor fornecido pelo usu�rio. *//

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float r,vl;
	printf ("\n==============================C�LCULO DE VOLUME DE UMA ESFERA===============================\n");
	printf ("\n -> Insira o raio da esfera (em cent�metros): ");									
	scanf ("%f",&r);
	
		vl = 4*3.14*(pow(r,3))/3;
		
	printf ("\n===========================================================================");
	printf ("\n -> O volume de uma esfera de raio %.0f � igual a aproximadamente: %.2f cm�",r,vl);
	printf ("\n===========================================================================");
	printf ("\n\n");
	return (0);
	system ("PAUSE");
}
