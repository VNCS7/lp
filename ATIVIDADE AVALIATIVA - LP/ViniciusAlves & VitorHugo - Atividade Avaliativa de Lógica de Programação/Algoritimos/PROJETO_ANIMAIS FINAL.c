#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA CORDE FUNDO/CARACTERES.
#include <stdio.h>//MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUN��ES MATEMÁTICAS.
#include <locale.h>//PERMITE O USO DE ACENTUA��ES DA LÍNGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR��RIO,TEMPO ETC.
#include <windows.h>//EMULA JANELAS.
//Utilizando as estruturas de controle: Sequencial, decis�o e la�o de repeti��o, construa um algoritmo que seja capaz de concluir qual dentre os animais seguintes foi escolhido, atrav�s de perguntas e respostas.//
//VNCS//
int main() 
{
	char r1[4],r2[4],r3[4],r4[4],r5[4],r6[4],continuar[4];
	int animal=1;
	setlocale(LC_ALL, "Portuguese");
do
{
	puts
	("\t\t\t|");
	printf ("Escolha um dos seguintes animais: \n\nLe�o\tBaleia\t\tTartaruga\nCavalo\tAvestruz\tCrocodilo\nHomem\tPinguim\t\tCobra\nMacaco\tPato\nMorcego\t�guia");
	printf ("\n\n\nResponda as seguintes indaga��es com 'SIM' ou 'NAO'\n\n");
	printf ("O animal escolhido � um mam�fero?\n->");
	scanf ("%s",r1);
	printf ("\nO animal escolhido � quadr�pede?\n->");
	scanf ("%s",r2);
	printf ("\nO animal escolhido � carn�voro?\n->");
	scanf ("%s",r3);
	printf ("\nO animal escolhido � herb�voro?\n->");
	scanf ("%s",r4);
	
		if(stricmp(r1,"SIM")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"NAO")==0 && stricmp(r4,"SIM")==0)
		{
			printf ("\nO Animal escolhido voa?\n->");
			scanf("%s",r5);
			
				if(stricmp(r5,"SIM")==0)
				{
					printf("\n Animal escolhido: Morcego");
					animal++;
				
				}
				else
				{
					printf("\n Animal escolhido: Homem");
					animal++;
				}
		}
		
		if(stricmp(r1,"NAO")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"NAO")==0)
		{
			printf("\nO animal escolhido voa?\n->");
			scanf("%s",r5);
			
				if(stricmp(r5,"SIM")==0)
				{
					printf ("\nAnimal escolhido: �guia");
					animal++;
				}
				if(stricmp(r5,"NAO")==0)
				{
					printf("\nO animal escolhido � uma ave?\n->");
					scanf("%s",&r6);
					if(stricmp(r6,"SIM")==0)
					{
						printf ("\nAnimal escolhido: Pinguim");	
						animal++;	
					}
					else
					{
						printf("\nAnimal escolhido: Cobra");
						animal++;					
					}
				}
		}
		else	
	
	if(stricmp(r1,"SIM")==0 && stricmp(r2,"SIM")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"NAO")==0)
	{
		printf("\nAnimal escolhido: Le�o");
		animal++;
	}
	if(stricmp(r1,"SIM")==0 && stricmp(r2,"SIM")==0 && stricmp(r3,"NAO")==0 && stricmp(r4,"SIM")==0)
	{
		printf("\nAnimal escolhido: Cavalo");
		animal++;
	}		
	if(stricmp(r1,"SIM")==0 && stricmp(r2,"SIM")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"SIM")==0)
	{
		printf("\nAnimal escolhido: Macaco");
		animal++;
	}	
	if(stricmp(r1,"SIM")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"NAO")==0)
	{
		printf("\nAnimal escolhido: Baleia");
		animal++;
	}	
	if(stricmp(r1,"NAO")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"SIM")==0)
	{
		printf("\nAnimal escolhido: Avestruz");
		animal++;
	}
	if(stricmp(r1,"NAO")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"NAO")==0 && stricmp(r4,"SIM")==0)
	{
		printf("\nAnimal escolhido: Pato");
		animal++;
	}
	if(stricmp(r1,"NAO")==0 && stricmp(r2,"SIM")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"SIM")==0)
	{
		printf("\nAnimal escolhido: Tartaruga");
		animal++;
	}
	if(stricmp(r1,"NAO")==0 && stricmp(r2,"SIM")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"NAO")==0)
	{
		printf("\nAnimal escolhido: Crocodilo");
		animal++;
	}
		
	if(animal==1)
	{
		printf("\nCombina��o Inv�lida!");
	}
	
	printf("\n\nDeseja jogar novamente?\n->");
	scanf("%s",&continuar);
	system("CLS");
} while(stricmp(continuar,"SIM")==0);
	printf("Feito por: \n\nVIN�CIUS ALVES\tRM:18785\nVITOR HUGO\tRM:18743");
	sleep(2);
	return (0);
}
