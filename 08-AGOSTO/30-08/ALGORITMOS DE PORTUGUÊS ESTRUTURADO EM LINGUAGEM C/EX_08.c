#include<locale.h>

/*
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include <string.h>
/*crie um alogritimo que receba o nome do aluno e suas 4 notas bimestrais, calcule e apresente a média anual desse aluno*/
/*IF YOUNG METRO DON'T TRUST I'M GON' SHOOT YOU*/
/*THIS WAS MADE BY: VNCS*/
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	float nt1,nt2,nt3,nt4,mf;
	char al [20];
	printf ("Digite o nome do aluno: ");
	scanf  ("%s",&al);
	printf ("============================================\n");
	printf ("\nDigite a nota do 1º Bimestre: \n");
	scanf ("%f",&nt1);
	printf ("Digite a nota do 2º Bimestre: \n");
	scanf ("%f",&nt2);
	printf ("Digite a nota do 3º Bimestre: \n");
	scanf ("%f",&nt3);
	printf ("Digite a nota do 4º Bimestre: \n");
	scanf ("%f",&nt4);
	mf= (nt1+nt2+nt3+nt4)/4;
	printf("\n============================================\n");
	printf ("Prezado %s, sua média final é: %.1f \n",al,mf);
	printf("============================================\n");
	system("PAUSE");
}
