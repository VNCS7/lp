#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//O �ndice de massa corporal ( Peso/Alt2) avalia o n�vel de gordura de cada pessoa e � adotado pela Organiza��o Mundial de Sa�de (OMS). O IMC de uma pessoa � dado pela divis�o da massa em kg pela altura em metros elevado ao quadrado. Elabore um algoritmo que, a partir da massa e da altura informados pelo usu�rio, calcule e apresente seu IMC e sua classifica��o conforme a tabela seguinte:
//< 18 Magreza 
//18,0 a 24,9 Saud�vel 
//25,0 a 29,9 Sobrepeso
//>= 30,0 Obesidade
//VNCS\\

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float alt, ps, imc;
	printf("Digite a sua altura: ");
	scanf("%f",&alt);
	printf("Digite o seu peso: ");
	scanf("%f",&ps);
	imc = ps/pow(alt,2);
	if (imc<=18)
	{
		printf("=================================================");
		printf("\nIMC � de: %.2f. \nClassifica��o: Magreza.\n", imc);
		printf("\n=================================================\n");
	}
	else
	
	if (imc>=18 && imc<=24.9)
	{
		printf("=================================================");
		printf("\nIMC � de: %.2f. \nClassifica��o: Saud�vel.\n", imc);
		printf("=================================================\n");
	}
	else

	if (imc>=25 && imc<=29.9)
	{
		printf("=================================================");
		printf("\nIMC � de: %.2f. \nClassifica��o: Sobrepeso.\n", imc);
		printf("=================================================\n");
	}
	else
	
	if (imc>=30)
	{
		printf("=================================================");
		printf("\n IMC � de: %.2f. \nClassifica��o: Obeso.\n", imc);
		printf("=================================================\n");	
	}
	
	system ("PAUSE");
	return (0);
}
