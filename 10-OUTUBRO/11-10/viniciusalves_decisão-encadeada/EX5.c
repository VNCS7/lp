#include <conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Crie um algoritmo que receba 4 notas do aluno e verifique se o mesmo foi aprovado ou reprovado com um dos seguintes conceitos:
//Aprovado:	 	
//A - maior igual � 9                                    
//B � maior igual � 7 e menor que 9         
//C � maior igual � 5 e menor que 7         
//Reprovado:
//D � maior igual � 2,5 e menor que 5 
//E � menor que 2,5
//VNCS//

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1,n2,n3,n4,md;
	printf("Digite a 1� nota: ");
	scanf("%f",&n1);
	printf("Digite a 2� nota: ");
	scanf("%f",&n2);
	printf("Digite a 3� nota: ");
	scanf("%f",&n3);
	printf("Digite a 4� nota: ");
	scanf("%f",&n4);
	
	md=((n1+n2+n3+n4)/4);
		if(md>=9)
			printf("\nVoc� foi aprovado.\n\n");
		
		if(md>=7 && md<9)
			printf("\nVoc� foi aprovado.\n\n");
		
		if(md>=5 && md<7)
			printf("\nVoc� foi aprovado.\n\n");
		
		if(md>=2.5 && md<5)
			printf("\nVoc� foi reprovado.\n\n");
		
		if(md<2.5)
			printf("\nVoc� foi reprovado.\n\n");

	system("PAUSE");
	return(0);	
}
