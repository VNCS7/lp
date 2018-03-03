#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
// PROGRAMA NÃO FINALIZADO, PRECISA DE ALTERAÇÕES!!!!!
/*

Elabore um programa que simule o funcionamento de um caixa eletronico onde usuario tera as seguintes opções:
	-Consulta de Saldo
	-Saque
	-Deposito
	-Empréstimo pessoal com 5% juros
	-Pagamento de Contas

O saldo inicial da conta é de R$ 10.000,00 é obrigatório o uso de senha alfanumerica com 4 digitos 
para acessar qualquer operação. Poderá ser feita quantas operações desejar ao final deverá ser exibido o saldo da conta */

//VNCS//
int main(){


	setlocale(LC_ALL, "Portuguese");
	float saldo=10000,valor_saque=0,valor_emprestimo=0,valor_conta=0,pgto_emprestimo=0,valor_deposito=0;
	char usuario[20],senha[5],senha2[5],senhalogin[5];
	int outra_op=0,op=0,senhainc=0;
	
	do{
	
		printf("-=-=-=-=-=SIMULADOR DE CAIXA ELETRÔNICO-=-=-=-=-=\n");
		printf("\n\n-=-=-=-=-=CADASTRO DE SENHA-=-=-=-=-=");
		
		printf("\nInsira seu nome: ");
		scanf ("%s",&usuario);
	
		printf("\nInsira uma senha: ");
		scanf ("%s",&senha);
	
		printf ("Insira a senha novamente: ");
		scanf ("%s",&senha2);

			if (senhainc==3)
			{
				printf("\nNúmero de tentativas excedidas\nEncerrando progama");
				sleep(1);
				printf(".");
				sleep (1);
				printf(".");
				sleep (1);
				printf(".");
				return 0;
			}
		
			if(strcmp(senha,senha2)==0)
			{
				printf ("\nSenha válida");
				sleep (1);
				system ("CLS");
			}
			else
			{
				senhainc++;
				printf("\nSenha inválida\n\n");
				sleep (1);
				system ("CLS");
			}
		
		printf ("-=-=-=-=-=LOGIN-=-=-=-=-=");
			if (senhainc==3)
			{
				printf("\nNúmero de tentativas excedidas\nEncerrando progama");
				sleep(1);
				printf(".");
				sleep (1);
				printf(".");
				sleep (1);
				printf(".");
				return 0;
			}
		
		printf("\nInsira a senha cadastrada: ");
		scanf ("%s",&senhalogin);
	
		if(strcmp(senha,senhalogin)==0)
		{
			system("CLS");
			
			while(outra_op!=2)
			{
			
			printf("Olá, Sr(ª) %s. Por favor selecione a opção desejada: ",usuario);
			printf("\n\n[1] Consultar Saldo\n[2] Saque\n[3] Empréstimo Pessoal\n[4] Pagamento de Conta\n[5] Depósito\n[6] Encerrar\n\n->");	
			scanf ("%d",&op);
			
			switch(op)
			{
				case 1:
					printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
					printf("\nSaldo Atual é: R$ %.2f",saldo);
					printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
					break;
				case 2:
					printf("\nInsira o valor do saque: ");
					scanf ("%f",&valor_saque);
						if (valor_saque>saldo)
						{
							printf("\nSaldo Insuficiente para realizar os saque");
						}
						else
						{
							saldo=saldo-valor_saque;
						printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
						printf("\nSaldo atual: R$ %.2f",saldo);	
						printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");	
						}
					
					break;
				case 3:
					printf("\nInsira o valor do empréstimo: ");
					scanf ("%f",&valor_emprestimo);
					saldo=saldo+valor_emprestimo;
					pgto_emprestimo=valor_emprestimo+(valor_emprestimo*0.05);
					printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
					printf("\nSaldo atual: R$ %.2f",saldo);
					printf("\nValor a ser pago pelo empréstimo sera: R$%.2f",pgto_emprestimo);
					printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
					break;
				case 4:
					printf("\nInsira o valor da conta a ser paga: ");
					scanf("%f",&valor_conta);
					if (valor_conta>saldo)
						{
							printf("\nSaldo Insuficiente para realizar o pagamento");
						}
					else
					{
						saldo=saldo-valor_conta;
						printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
						printf("\nSaldo atual: R$ %.2f",saldo);
						printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
					}
					break;
				case 5:
					printf("Insira o valor a ser depositado: ");
					scanf("%f",&valor_deposito);
					saldo=saldo+valor_deposito;
					printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
					printf("\nSaldo atual: R$ %.2f",saldo);
					printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
					break;
				case 6:
					printf("\n		Obrigado e volte Sempre!");
					return(0);
					sleep(1);
					system("CLS");
					break;	
				default:
					printf("\n Opção Inexistente");
					sleep(1);
			}
			
				printf("\n\nDeseja realizar outra operação? <1> Sim <2> Não\n	->");
				scanf ("%d",&outra_op);
				system("CLS");
			}
			
		}
	}while(outra_op!=2);

}
