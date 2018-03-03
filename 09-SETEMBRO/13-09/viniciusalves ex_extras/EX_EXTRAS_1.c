#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include <string.h>
//Elabore um programa que calcule o custo para pintar a área de um tanque cilíndrico.
//Sabendo-se que:
//Cada litro de tinta pinta 3 metros;
//Que cada lata de tinta possui 5 litros;
//E que cada lata de tinta custa R$120,00.
//Apresentar ao final:
//Qual o custo total e quantas latas de tintas serão necessárias.
//VNCS//
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float ra,al,at,ct,ql;
	printf ("-> Insira o raio: ");
	scanf ("%f", &ra);
	printf ("-> Insira a altura: ");
	scanf ("%f", &al);
	
		at=2*3.14*ra*(ra+al);
		ql=at/3;
		ct= ql*120;
	
	printf ("\n-> Área total é: %.2f \n",at);
	
		if(ql<1)
		{
			printf ("\n============================================\n");
			printf ("-> Será necessário aproximadamente uma lata");
			printf ("\n-> Custo total: R$ 120,00");
			printf ("\n============================================\n");
		}
		else
		{
			printf ("\n========================================\n");
			printf ("-> Quantidade latas necessárias: %.2f",ql);
			printf ("\n-> Custo total: R$ %.2f",ct);
			printf ("\n========================================\n\n");
		}
	
	
	
	system ("PAUSE");
	return (0);
}

