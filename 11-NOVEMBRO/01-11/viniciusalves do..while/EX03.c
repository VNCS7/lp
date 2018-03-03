#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Crie um algoritmo que receba o ano de nascimento de 15 pessoas. Calcule e mostre se atingiu a maioridade ou não.//
//VNCS//
int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int i=1,nasc,id;
   	char nm[20];
   	do
   	{
	printf("-> Digite seu nome: ");
    scanf("%s", &nm);
	printf ("-> Digite o ano de nascimento: ");
	scanf ("%i", &nasc);	
    id=2017-nasc;
   	
    if (id<18)
    {
		printf ("\n=======================================================================\n");
		printf("-> Prezado(ª) %s, você tem anos e ainda não atingiu  a maioridade.",nm,id);
		printf ("\n=======================================================================\n");
    }
    else
    {
	     printf ("\n=======================================================================\n");
		 printf("-> Prezado(ª) %s, você tem %i anos e já é considerado maior de idade.",nm,id);
		 printf ("\n=======================================================================\n\n");
    }
    i++;
	} while(i<=15);
	system ("PAUSE");
	return (0);
}

