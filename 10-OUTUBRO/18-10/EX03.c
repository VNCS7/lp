#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA COR DE FUNDO/CARACTERES.
#include <stdio.h> //MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUN«’ES MATEM¡TICAS.
#include <locale.h>//PERMITE O USO DE ACENTUA«’ES DA LÕNGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR¡RIO,TEMPO ETC.
//Crie um algoritmo que receba 4 notas bimestrais, de 7 alunos diferentes, calcule e apresente a m√©dia anual de cada aluno.//
/*VNCS*/
main ()
{
	setlocale(LC_ALL, "Portuguese");
	float n1,n2,n3,n4,mf;
	int i=1;
	char nm_al[15];
		while(i<=7)
		{	
			printf ("Insira o nome do aluno: ");
			scanf ("%s", &nm_al);
			printf ("\nInsira a 1™ Nota: ");
			scanf ("%f", &n1);
			printf ("Insira a 2™ Nota: ");
			scanf ("%f", &n2);
			printf ("Insira a 3™ Nota: ");
			scanf ("%f", &n3);
			printf ("Insira a 4™ Nota: ");
			scanf ("%f", &n4);
			mf=(n1+n2+n3+n4)/4;
			
			printf("==============================================================================");
			printf("\nPrezado(a) %s, vocÍ È o aluno de n˙mero (%d) e sua mÈdia anual È: %.2f\n",nm_al,i,mf);
			printf("==============================================================================\n\n");
			i++;
		}
	printf("\n");
	system ("PAUSE");
	return (0);
}
