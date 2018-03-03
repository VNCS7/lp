#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Crie um algoritmo que receba 4 notas do aluno e verifique se o mesmo foi aprovado ou reprovado com um dos seguintes conceitos
//VNCS//
int main() 
{
	float n1,n2,n3,n4,md;
	int i;
	setlocale(LC_ALL, "Portuguese");
	
	for (i=1;i<=5;i++)
	{
		printf("Digite a 1ª nota: ");
		scanf("%f",&n1);
		printf("Digite a 2ª nota: ");
		scanf("%f",&n2);
		printf("Digite a 3ª nota: ");
		scanf("%f",&n3);
		printf("Digite a 4ª nota: ");
		scanf("%f",&n4);
	
		md=(n1+n2+n3+n4)/4;
		
		if(md>=9)
			printf("\nAluno #%d Você foi aprovado.\n\n",i);
		else
		
		if(md>=7 && md<9)
			printf("\nAluno #%d Você foi aprovado.\n\n",i);
		else
		
		if(md>=5 && md<7)
			printf("\nAluno #%d Você foi aprovado.\n\n",i);
		else
		
		if(md>=2.5 && md<5)
			printf("\nAluno #%d Você foi reprovado.\n\n",i);
		else
		
		if(md<2.5)
			printf("\nAluno #%d Você foi reprovado.\n\n",i);
		else;	
	}
	return (0);
}
