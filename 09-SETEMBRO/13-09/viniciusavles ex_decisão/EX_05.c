#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Crie um algoritmo que receba o ano de nascimento de uma pessoa. Calcule e mostre se atingiu a maioridade ou n�o.//
//VNCS//

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int nasc,id;
   	char nm[20];
    printf("-> Digite seu nome: ");
    scanf("%s", &nm);
	printf ("-> Digite o ano de nascimento: ");
	scanf ("%i", &nasc);
	
    id=2017-nasc;
   	
    if (id<18)
    {
        printf ("\n=======================================================================\n");
		printf("-> Prezado(�) %s, voc� tem %i anos e ainda n�o atingiu  a maioridade.",nm,id);
		printf ("\n=======================================================================\n");
    }
    else
    {
         printf ("\n=======================================================================\n");
		 printf("-> Prezado(�) %s, voc� tem %i anos e j� � considerado maior de idade.",nm,id);
		 printf ("\n=======================================================================\n\n");
    }
  
	system ("PAUSE");
	return (0);
}
