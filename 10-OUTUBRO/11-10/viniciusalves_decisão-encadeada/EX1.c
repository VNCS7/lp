#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
#include <time.h>
//Receba a hora de in�cio do turno de trabalho e exiba na tela se � turno manh�, tarde ou noite. Considere:
//Manh� � 5hs �s 12,59hs;
//Tarde � 13hs �s 20,59hs;
//Noite � 21 hs �s 4,59 hs; 
//VNCS\\

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float hr;
	printf("Digite a hora: ");
	scanf("%f",&hr);
		comeco:
		if (hr>=5 && hr<=12.59)
		{
			printf("\n==============================");
			printf("\nTurno no periodo da manh�.\n");
			printf("==============================\n");
		}
		else
		
		if (hr>=13 && hr<=20.59)	
		{
			printf("\n==============================");
			printf("\nTurno no periodo da tarde.\n");
			printf("==============================\n");
		}
		else
		
		if (hr>=21 && hr<=23.59)
		{
			printf("\n==============================");
			printf("\nTurno no periodo da noite.\n");
			printf("==============================\n");
		}
		else
		
		if (hr>=00 && hr<=4.59)
		{
			printf("\n==============================");
			printf("\nTurno no periodo da noite.\n");
			printf("==============================\n");
		}
		
		else
			printf("Horario invalido. Por favor Insira Novamente\n");
			sleep(1);
			system("CLS");
			goto comeco;
	system ("PAUSE");
	return (0);
}
