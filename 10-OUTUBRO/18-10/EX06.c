#include <conio.h>//MANIPULA CARACTERES NA TELA, ESPECIFICA COR DE FUNDO/CARACTERES.
#include <stdio.h> //MANIPULA ENTRADA E SAIDA DE DADOS.
#include <stdlib.h>//EMULA O PROMPT DE COMANDO.
#include <math.h>//CONJUNTO DE FUN«’ES MATEM¡TICAS.
#include <locale.h>//PERMITE O USO DE ACENTUA«’ES DA LÕNGUA PORTUGUESA.
#include <string.h>//MANIPULA STRINGS.
#include <time.h>//MANIPULA DATA,HOR¡RIO,TEMPO ETC.
//O √≠ndice de massa corporal ( Peso/Alt2) avalia o n√≠vel de gordura de cada pessoa e √© adotado pela Organiza√ß√£o Mundial de Sa√∫de (OMS). O IMC de uma pessoa √© dado pela divis√£o da massa em kg pela altura em metros elevado ao quadrado. Elabore um algoritmo que, a partir da massa e da altura informados pelo usu√°rio, calcule e apresente o IMC de v√°rias pessoas e sua classifica√ß√£o conforme a tabela seguinte:
//< 18 Magreza 
//18,0 a 24,9 Saud√°vel 
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
    printf("Deseja calcular IMC? (Digite S para Sim e N para N„o): ");
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
					printf("\nPessoa n˙mero (%d) seu IMC È de: %.2f. \nClassificaÁ„o: Magreza.\n", count,imc);
					printf("\n=================================================\n\n");
				}
				else
	
				if (imc>=18 && imc<=24.9)
				{
					printf("\n=================================================");
					printf("\nPessoa n˙mero (%d) seu IMC È de: %.2f. \nClassificaÁ„o: Saud·vel.\n", count, imc);
					printf("=================================================\n\n");
				}
				else

				if (imc>=25 && imc<=29.9)
				{
					printf("\n=================================================");
					printf("\nPessoa n˙mero (%d) seu IMC È de: %.2f. \nClassificaÁ„o: Sobrepeso.\n",count, imc);
					printf("=================================================\n\n");
				}
				else
	
				if (imc>=30)
				{
					printf("\n=================================================");
					printf("\nPessoa n˙mero (%d) seu IMC È de: %.2f. \nClassificaÁ„o: Obeso.\n", count,imc);
					printf("=================================================\n\n");	
				}
			count++	;
			printf("Deseja calcular IMC? (Digite S para Sim e N para N„o): ");
    		scanf("%s",&i);
    //    	goto decision;
		}
	system ("PAUSE");
	return 0;
}
