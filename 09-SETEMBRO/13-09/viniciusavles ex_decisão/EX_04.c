#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Crie um algoritmo que receba uma senha e verifique sua validade ou não. Senha válida “asdfg”.//
//VNCS//

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char senha[5];
	printf ("-> Digite a Senha: ");
	scanf ("%s", &senha);
		if(strcmp(senha,"asdfg")==0)
		{
			printf ("\n=====================================================================\n");
			printf("-> Senha V�lida");
			printf ("\n=====================================================================\n");
		}
		else
		{
			printf ("\n=====================================================================\n");
			printf("Senha Inv�lida");
			printf ("\n=====================================================================\n\n");
		}
		
	
	system ("PAUSE");
	return (0);
}
