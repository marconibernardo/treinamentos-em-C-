#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(int argc, char* argv[])
{
	int octal, i, decimal,n;
	int a,opcao;
	char b[10];
	
	
	printf("1: converter binario\n");
	printf("2: converter decimal\n");
	printf("3: converter octal\n");
	printf("\n\n informe a opcao:");
	scanf("%d",&opcao);
	getchar();
	printf("Digite um numero: ");
	scanf("%d",&a);

	itoa(a,b,2); 

	printf("\nO numero %d em binario e: %s",a);

	getch();
	
	
	printf("Digite  o valor em octal: ");
	scanf("%i",&octal);

	n=0;

	for(i=0; i<n; i++)
	{
    decimal=octal*n;
	}

printf("O valor em decimal eh: %i",decimal);
}


