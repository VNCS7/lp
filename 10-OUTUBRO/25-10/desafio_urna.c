#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>
/*Elabore um algoritimo que simule uma urna eletronica sabendo-se que a elei��o ser� disputada por 4 candidadtos, 
al�m dos votos brancos e nuluos. O n�mero de eleitores � indeterminado.
Ao final apresentar o total de votos*/
/*VNCS*/
main ()
{
	setlocale(LC_ALL, "Portuguese");
	int C1=0,C2=0,C3=0,C4=0,VB=0,VN=0,vldr,senhainc=0;
	char senha[15],voto[10];
	
	do
	{
	printf ("-=-=-=-=SIMULADOR DE URNA ELETR�NICA=-=-=-=-");
	printf ("\n\n[1] Jair Bolsonaro\n[2] Ciro Gomes \n[3] Lula\n[4] D�ria\n[5] Voto em branco\n[6] Anular Voto\n\nInsira seu voto: ");
	scanf ("%s", &voto);

		if(voto != '1'&&'2'&&'3'&&'4'&&'4'&&'5'&&'6'&&'admin')
			system("CLS");
				
		if (strcmp(voto, "1") == 0)//BOLSONARO
		{
			
			puts ("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
			printf("Voc� selecionou 'JAIR BOLSONARO'\n\n0 Confirmar | 1 Cancelar: ");
			scanf("%d",&vldr);
			    
				if(vldr==0)
			    {
					C1++;
					printf("\n->Voto registrado");
					puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
					sleep(2);
					system("cls");
						
				}
				else
				{
					printf("\n->Voto cancelado");
					puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
					sleep(2);
					system("cls");
		
				}		
		
		} 
		
		if (strcmp(voto, "2") == 0)//CIRO GOMES
		{
			
			puts ("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
					printf("Voc� selecionou 'CIRO GOMES'\n\n0 Confirmar | 1 Cancelar: ");
					scanf("%d",&vldr);
					if(vldr==0)
					{
						C2++;
						printf("\n->Voto registrado");
						puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
						sleep(2);
						system("cls");
		
					}
					else
					{
						printf("\n->Voto cancelado");
						puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
						sleep(2);
						system("cls");
	
					}
		
		}
		
		if (strcmp(voto, "3") == 0)//LULA
		{
			
			puts ("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
			printf("Voc� selecionou 'LULA'\n\n0 Confirmar | 1 Cancelar: ");
			scanf("%d",&vldr);
				if(vldr==0)
				{
					C3++;
					printf("\n->Voto registrado");
					puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
					sleep(2);
					system("cls");
			
				}
				else
				{
					printf("\n->Voto cancelado");
					puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
					sleep(2);
					system("cls");
			
				}
		
		}
		
		if (strcmp(voto, "4") == 0)//D�RIA
		{
			puts ("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
			printf("Voc� selecionou 'D�RIA'\n\n0 Confirmar | 1 Cancelar: ");
			scanf("%d",&vldr);
				if(vldr==0)
				{
					C4++;
					printf("\n->Voto registrado");
					puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
					sleep(2);
					system("cls");
				
				}
				else
				{
					printf("\n->Voto cancelado");
					puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
					sleep(2);
					system("cls");
				
				}
		
		}
		
		if (strcmp(voto, "5") == 0)//BRANCO
		{
			puts ("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
			printf("\nVoc� selecionou 'BRANCO'\n\n0 Confirmar | 1 Cancelar: ");
			scanf("%d",&vldr);
				if(vldr==0)
				{
					VB++;
					printf("\n->Voto registrado");
					puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
					sleep(2);
					system("cls");
			
				}
				else
				{
					printf("\n->Voto cancelado");
					puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
					sleep(2);
					system("cls");
		
				}
		}
		
		if (strcmp(voto, "6") == 0)//ANULAR
		{
			puts ("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
			printf("\nVoc� selecionou 'ANULAR'1 \n\n0 Confirmar | 1 Cancelar: ");
			scanf("%d",&vldr);
				if(vldr==0)
				{
					VN++;
					printf("\n->Voto registrado");
					puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
					sleep(2);
					system("cls");
				
				}
				else
				{
					printf("\n->Voto cancelado");
					puts ("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
					sleep(2);
					system("cls");
				}
		}
		
		if (strcmp(voto, "admin") == 0)//ENCERRAR VOTA��O
		{
			do
			{
				if (senha!="encerrarvotacao")
				system("CLS");

				puts ("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
				printf("Insira a senha de ADMINISTRADOR para encerrar a vota��o!\n\n");
				printf("SENHA: ");
				scanf("%s",senha);
						
					if (strcmp(senha,"encerrarvotacao")==0)
					{
						sleep(1);
						system("CLS");
						puts ("\n=-=-=-=-=-=-=-=-=-=-");
						printf("Resumo dos votos: \n\nJAIR BOLSONARO:\t%d \nCIRO GOMES:\t%d \nLULA:\t\t%d \nD�RIA:\t\t%d \nBRANCOS:\t%d \nNULOS:\t\t%d\n",C1,C2,C3,C4,VB,VN);
						puts ("=-=-=-=-=-=-=-=-=-=-\n");
						return(0);
					}
				
					else
					{
						senhainc++;
						printf("\nSenha Incorreta, tente novamente\n\n");
						sleep (1);
		
          			}
			}while(senhainc <3);
			
			if(senhainc==3)//N�MERO DE TENTATIVAS EXCEDIDO
			{
				system("CLS");
				printf("\nReiniciando:");
				sleep(1);
				printf(" 3.");
				sleep(1);
				printf("2.");
				sleep(1);
				printf("1.	");
				sleep(1);
				system ("CLS");
			}
			
        }
	}while(voto!="admin");
	
	return (0);

}
