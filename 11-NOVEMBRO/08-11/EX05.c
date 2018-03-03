#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Crie um  programa que classifique os nadadores nas categorias de acordo com sua idade:
//Infantil A – de 5 à 7 anos;
//Infantil B – de 8 à 10 anos; 
//Juvenil A – de 11 à  13 anos;
//Juvenil B  - de 14 à 17 anos;
//Senior – a partir de 18 anos.
//VNCS//
int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int i,id;
	
	for (i=1;i<=5;i++)
	{
	printf("Insira a idade: ");
	scanf("%d",&id);
		
		if(id>=5 && id<=7)
			printf("\nCategoria: Infantil A.\n\n");
		else	
		
		if(id>=8 && id<=10)
			printf("\nCategoria: Infantil B.\n\n");
		else
			
		if(id>=11 && id<=13)
			printf("\nCategoria: Juvenil A.\n\n");
		else
			
		if(id>=14 && id<=17)
			printf("\nCategoria: Juvenil B.\n\n");
		else
			
		if(id>=18)
			printf("\nCategoria: Senior.\n\n");			
		else
			
		if(id<5)
			printf("\nSem classificação.\n\n");	
	}	

	return (0);
}
