#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	printf("Digite um n�mero de 1 a 12 para ver o m�s correspondente: ");
	scanf("%d",&op);
		if(op==1)
		printf("\nM�s correspondente: Janeiro.\n",op);
		else
		
		if(op==2)
			printf("\nM�s correspondente: Fevereiro.\n",op);
		else
		
		if(op==3)
			printf("\nM�s correspondente: Mar�o.\n",op);
		else
		
		if(op==4)
			printf("\nM�s correspondente: Abril.\n",op);
		else
		
		if(op==5)
			printf("\nM�s correspondente: Maio.\n",op);
		else
		
		if(op==6)
			printf("\nM�s correspondente: Junho.\n",op);
		else
		
		if(op==7)
			printf("\nM�s correspondente: Julho.\n",op);
		else
		
		if(op==8)
			printf("\nM�s correspondente: Agosto.\n",op);
		else
		
		if(op==9)
			printf("\nM�s correspondente: Setembro.\n",op);
		else
		
		if(op==10)
			printf("\nM�s correspondente: Outubro.\n",op);
		else
		
		if(op==11)
			printf("\nM�s correspondente: Novembro.\n",op);
		else
		
		if(op==12)
			printf("\nM�s correspondente: Dezembro.\n",op);
		else
			printf("\nO n�mero digitado � invalido.\n");
	
	printf("\n");
	system ("PAUSE");
	return (0);
}
