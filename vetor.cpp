#include<stdio.h>
#define TF 9
int main()

{
	int vet [TF],TL=0, num, elem, pos, i;
	// leitura do vetor usando TL.//
	printf("digite um numero:\n");
	scanf("%d",&num);
	while(num>0 &&TL<TF-1)
	{
		vet [TL]=num;
		TL++;
		
		if (TL<TF-1)
		{
		printf("digite um numero:\n");
		scanf("%d",&num);
		}
		
	}
	
	//leitura do elemento para inserir ordenadamente//
	
	printf("digite um elemento para inserir:\n");
	scanf("%d",&elem);
	
	//busca a melhor posicao para inserir o elemento//
	
	pos=0;
	while(pos<TL && elem>vet[pos])
		pos++;
		//remanejamento//
		for (i=TL; i>pos;i--)
		vet[i]=vet[i-1];
		//insere o elemento//
		vet[pos]=elem;
		TL++;
		//EXIBE O RESULTADO//
		for(i=0; i<TL;i++)
		printf("%d",vet[i]);	
	
}
