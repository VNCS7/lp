#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA COR DE FUNDO/CARACTERES.
#include <stdio.h> //MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUN��ES MATEM�TICAS.
#include <locale.h>//PERMITE O USO DE ACENTUA��ES DA L�NGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR�RIO,TEMPO ETC.
//Crie um algoritmo que receba uma senha e verifique sua validade ou não. Senha válida “asdfg”. Se o usuário digitar errado mais de 3 vezes finalizar o programa.//
/*VNCS*/
main ()
{
	setlocale(LC_ALL, "Portuguese");
	char senha[5];
	int i=1;
	a:
	printf ("-> Digite a Senha: ");
	scanf ("%s", &senha);
		
		if (i==3)
		{
			printf("-> Senha Inv�lida");
			printf("\n\nN�mero tentativas excedidas.\nFinalizando programa.");
			sleep(1);
			return 0;
		}
		
		if (strcmp(senha,"asdfg")==0)
		{
			printf ("\n=====================================================================\n");
			printf("-> Senha V�lida");
			printf ("\n=====================================================================\n");
		}
		
		while (strcmp(senha,"asdfg")!=0)
		{
		i++;
		printf("-> Senha Inv�lida\n\n");
		goto a;
		}
	system ("PAUSE");
	return (0);
}
