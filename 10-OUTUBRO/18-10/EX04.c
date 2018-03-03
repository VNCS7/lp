#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA COR DE FUNDO/CARACTERES.
#include <stdio.h> //MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUNÇÕES MATEMÁTICAS.
#include <locale.h>//PERMITE O USO DE ACENTUAÇÕES DA LÍNGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HORÁRIO,TEMPO ETC.
//Tendo como dados de entrada a altura e o sexo de 15 pessoas, construa um algoritmo que calcule peso ideal, utilizando as seguintes formulas: 
//HOMEM=(72.7*ALT)-58;
//MULHER=(62.1*ALT)-44.7.
/*VNCS*/
main()
{
	setlocale(LC_ALL, "Portuguese");
	float al,psih,psim;
	char sexo;
	int i=1;
		while (i<=15)
		{
			printf ("-> Insira seu sexo (M para Masculino e F para Feminino) : ");	
			scanf ("%s", &sexo);
	
			if(sexo!='F'&& sexo!='M' && sexo!='f' && sexo!='m')
			{
				printf ("\nErro! Entrada Inválida\n");
				system("PAUSE");
				return 0;	
	
			}
			else
        	{
			printf ("-> Insira sua altura: ");
			scanf ("%f", &al);
			printf ("\n=====================================================================\n");	
			}
		
			if(sexo=='M'||sexo=='m')
			{
				psih=72.7*al-58 ;
				printf("-> Pessoa (%d) seu peso ideal é: %.2f", i,psih);
			}
			else
			{
				psim=62.1*al-44.7;
				printf("-> Pessoa (%d) seu peso ideal é: %.2f",i, psim);
			}
  			
			i++;
			
			printf ("\n=====================================================================\n\n\n");
		}
        system("PAUSE");
		return 0;
}
