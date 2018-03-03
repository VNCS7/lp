#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA CORDE FUNDO/CARACTERES.
#include <stdio.h>//MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUN«’ES MATEM√ÅTICAS.
#include <locale.h>//PERMITE O USO DE ACENTUA«’ES DA L√çNGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR¡ÅRIO,TEMPO ETC.
#include <windows.h>//EMULA JANELAS.
//Utilizando as estruturas de controle: Sequencial, decis„o e laÁo de repetiÁ„o, construa um algoritmo que seja capaz de concluir qual dentre os animais seguintes foi escolhido, atravÈs de perguntas e respostas.//
//VNCS//
int main() 
{
	char r1[4],r2[4],r3[4],r4[4],r5[4],r6[4],resp[4];
	int jogadas;
	setlocale(LC_ALL, "Portuguese");
	printf ("Escolha um dos seguintes animais: \n\nLe„o\tBaleia\t\tTartaruga\nCavalo\tAvestruz\tCrocodilo\nHomem\tPinguim\t\tCobra\nMacaco\tPato\nMorcego\t¡guia");
	printf ("\n\n\nResponda as seguintes indagaÁıes com 'SIM' ou 'NAO'\n");
do
{
	printf ("\nO Animal escolhido È um MamÌfero?\n->");
	scanf ("%s",&r1);
	printf ("\nO Animal escolhido È Quadr˙pede?\n->");
	scanf ("%s",&r2);
	printf ("\nO Animal escolhido È CarnÌvoro?\n->");
	scanf ("%s",&r3);
	printf ("\nO Animal escolhido È HerbÌvoro?\n->");
	scanf ("%s",&r4);
	printf ("\nO Animal escolhido È uma ave?\n->");
	scanf ("%s",&r5);
	printf ("\nO Animal escolhido voa?\n->");
	scanf ("%s",&r6);
	
	sleep (1);
	printf("\nPor favor aguarde, Estou pensando");
	sleep (1);
	printf(".");
	sleep (1);
	printf(".");
	sleep (1);
	printf(".\n");
	sleep (1);
	
	if(stricmp(r1,"SIM")==0 && stricmp(r2,"SIM")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"NAO")==0 && stricmp(r5,"NAO")==0 && stricmp(r6,"NAO")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: LE√O");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
	
	else if(stricmp(r1,"SIM")==0 && stricmp(r2,"SIM")==0 && stricmp(r3,"NAO")==0 && stricmp(r4,"SIM")==0 && stricmp(r5,"NAO")==0 && stricmp(r6,"NAO")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: CAVALO");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
		
	else if(stricmp(r1,"SIM")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"NAO")==0 && stricmp(r4,"SIM")==0 && stricmp(r5,"NAO")==0 && stricmp(r6,"NAO")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: HOMEM");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
		
	else if(stricmp(r1,"SIM")==0 && stricmp(r2,"SIM")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"SIM")==0 && stricmp(r5,"NAO")==0 && stricmp(r6,"NAO")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: MACACO");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
	
	else if(stricmp(r1,"SIM")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"NAO")==0 && stricmp(r4,"SIM")==0 && stricmp(r5,"NAO")==0 && stricmp(r6,"SIM")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: MORCEGO");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
		
	else if(stricmp(r1,"SIM")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"NAO")==0 && stricmp(r5,"NAO")==0 && stricmp(r6,"NAO")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: BALEIA");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
		
	else if(stricmp(r1,"NAO")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"SIM")==0 && stricmp(r5,"SIM")==0 && stricmp(r6,"NAO")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: AVESTRUZ");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
		
	else if(stricmp(r1,"NAO")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"NAO")==0 && stricmp(r5,"SIM")==0 && stricmp(r6,"NAO")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: PINGUIM");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
	
	else if(stricmp(r1,"NAO")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"NAO")==0 && stricmp(r4,"SIM")==0 && stricmp(r5,"SIM")==0 && stricmp(r6,"NAO")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: PATO");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
		
	else if(stricmp(r1,"NAO")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"NAO")==0 && stricmp(r5,"SIM")==0 && stricmp(r6,"SIM")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: ¡GUIA");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
		
	else if(stricmp(r1,"NAO")==0 && stricmp(r2,"SIM")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"SIM")==0 && stricmp(r5,"NAO")==0 && stricmp(r6,"NAO")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: TARTARUGA");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
		
	else if(stricmp(r1,"NAO")==0 && stricmp(r2,"SIM")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"NAO")==0 && stricmp(r5,"NAO")==0 && stricmp(r6,"NAO")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: CROCODILO");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
		
	else if(stricmp(r1,"NAO")==0 && stricmp(r2,"NAO")==0 && stricmp(r3,"SIM")==0 && stricmp(r4,"NAO")==0 && stricmp(r5,"NAO")==0 && stricmp(r6,"NAO")==0)
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf ("\nAnimal Escolhido: COBRA");
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
	
	else
	{
		printf ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf("\nCombinaÁ„o Inv·lida\n");
		printf ("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
	
	jogadas++;
	
	printf("\n\n\tDeseja Jogar Novamente?\n\t->");
	scanf ("%s",&resp);
	sleep(1);
	system("CLS");
	
} while(stricmp(resp,"SIM")==0);

	printf("Quantidade de vezes jogadas: %d\n",jogadas);
	sleep(1);
	MessageBox(0,"Feito por: \n\nVINÕCIUS ALVES\tRM:18785\nVITOR HUGO\tRM:18743","CR…DITOS",MB_OK);
}
