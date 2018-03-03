#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>
/*Elabore um algoritimo que simule uma urna eletronica sabendo-se que a eleição será disputada por 4 candidadtos, 
além dos votos brancos e nuluos. O número de eleitores é indeterminado.
Ao final apresentar o total de votos*/
/*VNCS*/
main ()
{
	setlocale(LC_ALL, "Portuguese");
	int C1=0,C2=0,C3=0,C4=0,VB=0,VN=0,vldr,senhainc=0;
	char senha[15],voto[10];
	
	do
	{
	printf ("-=-=-=-=SIMULADOR DE URNA ELETRÔNICA=-=-=-=-");
	printf ("\n\n[1] Jair Bolsonaro\n[2] Ciro Gomes \n[3] Lula\n[4] Dória\n[5] Voto em branco\n[6] Anular Voto\n\nInsira seu voto: ");
	scanf ("%s", &voto);

		if(voto != '1'&&'2'&&'3'&&'4'&&'4'&&'5'&&'6'&&'admin')
			system("CLS");
				
		if (strcmp(voto, "1") == 0)//BOLSONARO
		{
			
			puts ("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
			printf("Você selecionou 'JAIR BOLSONARO'\n\n0 Confirmar | 1 Cancelar: ");
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
					printf("Você selecionou 'CIRO GOMES'\n\n0 Confirmar | 1 Cancelar: ");
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
			printf("Você selecionou 'LULA'\n\n0 Confirmar | 1 Cancelar: ");
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
		
		if (strcmp(voto, "4") == 0)//DÓRIA
		{
			puts ("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
			printf("Você selecionou 'DÓRIA'\n\n0 Confirmar | 1 Cancelar: ");
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
			printf("\nVocê selecionou 'BRANCO'\n\n0 Confirmar | 1 Cancelar: ");
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
			printf("\nVocê selecionou 'ANULAR'1 \n\n0 Confirmar | 1 Cancelar: ");
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
		
		if (strcmp(voto, "admin") == 0)//ENCERRAR VOTAÇÃO
		{
			do
			{
				if (senha!="encerrarvotacao")
				system("CLS");

				puts ("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
				printf("Insira a senha de ADMINISTRADOR para encerrar a votação!\n\n");
				printf("SENHA: ");
				scanf("%s",senha);
						
					if (strcmp(senha,"encerrarvotacao")==0)
					{
						sleep(1);
						system("CLS");
						puts ("\n=-=-=-=-=-=-=-=-=-=-");
						printf("Resumo dos votos: \n\nJAIR BOLSONARO:\t%d \nCIRO GOMES:\t%d \nLULA:\t\t%d \nDÓRIA:\t\t%d \nBRANCOS:\t%d \nNULOS:\t\t%d\n",C1,C2,C3,C4,VB,VN);
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
			
			if(senhainc==3)//NÚMERO DE TENTATIVAS EXCEDIDO
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
