#include<conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA COR DE FUNDO/CARACTERES.
#include<stdio.h> //MANIPULA ENTRADA E SAIDA DE DADOS.
#include<stdlib.h>//EMULA O PROMPT DE COMANDO.
#include<math.h>//CONJUNTO DE FUN√á√ïES MATEM√ÅTICAS.
#include<locale.h>//PERMITE O USO DE ACENTUA√á√ïES DA L√çNGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR√ÅRIO,TEMPO ETC.
//Crie um algoritmo que calcule o sal·rio lÌquido  de 10 funcion·rios sabendo que: A cada um dependente, este recebe R$300,00 de bÙnus; O valor do seu sal·rio bruto È: Valor Hora * Horas Trabalhadas no MÍs; A aplicaÁ„o ir· coletar o n˙mero de Dependentes, Valor Hora, Hora Trabalhada e apresentar· o Valor Bruto e Valor Liquido.//
/*VNCS*/
main ()
{
	setlocale(LC_ALL, "Portuguese");
	float ndep,vlh,ht,vlb,vll ;
	int i=1;
	do
	{
	
	printf ("Pessoa: %d",i);
	printf ("\n\nInsira o n˙mero de dependentes: ");
	scanf ("%f", &ndep);
	printf ("\nInsira o valor da hora trabalhada: ");
	scanf ("%f", &vlh);
	printf ("\nInsira a quantidade de horas trabalhadas: ");
	scanf ("%f", &ht);
	
		vlb=vlh*ht;
		vll=vlb+(300*ndep);
		
	printf("\n Sal·rio bruto: %.2f",vlb);
	printf("\n Sal·rio lÌquido: %.2f\n\n",vll);
	i++;
	} while (i<=10);
	system ("PAUSE");
	return (0);
}
