#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA COR DE FUNDO/CARACTERES.
#include <stdio.h> //MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUN«’ES MATEM¡TICAS.
#include <locale.h>//PERMITE O USO DE ACENTUA«’ES DA LÕNGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR¡RIO,TEMPO ETC.
//Crie um algoritmo que receba uma senha e verifique sua validade ou n√£o. Senha v√°lida ‚Äúasdfg‚Äù. Se o usu√°rio digitar errado mais de 3 vezes finalizar o programa.//
/*VNCS*/
main ()
{
	setlocale(LC_ALL, "Portuguese");
	char senha[5];
	int i=1;
	while (i<=3)
	{
		printf ("-> Digite a Senha: ");
		scanf ("%s", &senha);
		
			if (strcmp(senha,"asdfg")==0)
			{
				printf ("\n=====================================================================\n");
				printf("-> Senha V·lida");
				printf ("\n=====================================================================\n\n");
				system("PAUSE");
				return(0);
			}
			else
			{
				printf("-> Senha Inv·lida\n\n");
				i++;
			}
	}				
	printf ("\nNumero de tentativas excedidas\n\n");
	system("PAUSE");
	return 0;
}
