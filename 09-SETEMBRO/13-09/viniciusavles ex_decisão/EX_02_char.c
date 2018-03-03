#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes formulas: 
// HOMEM=(72.7*ALT)-58;
// MULHER=(62.1*ALT)-44.7.
//VNCS//

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float al,psih,psim;
	char sexo;
	printf ("-> Insira seu sexo (M para Masculino e F para Feminino) : ");	
	scanf ("%c", &sexo);
	
		if(sexo!='F'&& sexo!='M' && sexo!='f' && sexo!='m')
			{
				printf ("\nErro! Entrada Inválida\n");
				return 0;	
			}
	
	printf ("-> Insira sua altura: ");
	scanf ("%f", &al);
	printf ("\n=====================================================================\n");	
	
		if(sexo=='M'||sexo=='m')
			{
				psih=72.7*al-58 ;
				printf("-> Peso ideal é : %.2f", psih);
			}
		else
			{
				psim=62.1*al-44.7;
				printf("-> Peso ideal é : %.2f", psim);
			}
		printf ("\n=====================================================================\n\n");
		
	system ("PAUSE");
	return (0);
}
