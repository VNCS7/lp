#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA COR DE FUNDO/CARACTERES.
#include <stdio.h> //MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUN��ES MATEM�TICAS.
#include <locale.h>//PERMITE O USO DE ACENTUA��ES DA L�NGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR�RIO,TEMPO ETC.
//O índice de massa corporal ( Peso/Alt2) avalia o nível de gordura de cada pessoa e é adotado pela Organização Mundial de Saúde (OMS). O IMC de uma pessoa é dado pela divisão da massa em kg pela altura em metros elevado ao quadrado. Elabore um algoritmo que, a partir da massa e da altura informados pelo usuário, calcule e apresente o IMC de várias pessoas e sua classificação conforme a tabela seguinte:
//< 18 Magreza 
//18,0 a 24,9 Saudável 
//25,0 a 29,9 Sobrepeso
// >= 30,0 Obesidade
/*VNCS*/
main ()
{
	setlocale(LC_ALL, "Portuguese");
	float alt, ps, imc;
	char i;
    int count=1;
	//decision:
    printf("Deseja calcular IMC? (Digite S para Sim e N para N�o): ");
    scanf("%s",&i);
    
		if(i=='n'||i=='N')
   			return 0;
		else
		
		while(i=='S'||i=='s')
		{	
			printf("\nDigite a sua altura: ");
			scanf("%f",&alt);
			printf("Digite o seu peso: ");
			scanf("%f",&ps);
			imc = ps/pow(alt,2);
			
				if (imc<=18)
				{
					printf("\n=================================================");
					printf("\nPessoa n�mero (%d) seu IMC � de: %.2f. \nClassifica��o: Magreza.\n", count,imc);
					printf("\n=================================================\n\n");
				}
				else
	
				if (imc>=18 && imc<=24.9)
				{
					printf("\n=================================================");
					printf("\nPessoa n�mero (%d) seu IMC � de: %.2f. \nClassifica��o: Saud�vel.\n", count, imc);
					printf("=================================================\n\n");
				}
				else

				if (imc>=25 && imc<=29.9)
				{
					printf("\n=================================================");
					printf("\nPessoa n�mero (%d) seu IMC � de: %.2f. \nClassifica��o: Sobrepeso.\n",count, imc);
					printf("=================================================\n\n");
				}
				else
	
				if (imc>=30)
				{
					printf("\n=================================================");
					printf("\nPessoa n�mero (%d) seu IMC � de: %.2f. \nClassifica��o: Obeso.\n", count,imc);
					printf("=================================================\n\n");	
				}
			count++	;
			printf("Deseja calcular IMC? (Digite S para Sim e N para N�o): ");
    		scanf("%s",&i);
    //    	goto decision;
		}
	system ("PAUSE");
	return 0;
}
