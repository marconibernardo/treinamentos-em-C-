#include<stdio.h>
#define TF 7

int main()


	int vetor1[TF],vetor2[TF],vetor3[TF*2],
	TL1=0,TL2=0,TL3=0,i=0,j=0,num,pos;
	//leitura do vetor1 de forma ordenada usando TL1//
	printf("digite um numero de vetor 1:\n");
	scanf("%d",&num);
	while(num>0 &&TL1<TF)
	{
		// busca da melhor posicao//
		pos=0;
		while(pos<TL1 && num>vetor1[pos])
		pos++;
		//remanejamento//
		for (i=TL1; i>pos; i--)
		vetor1[i]=vetor1[i-1];
		//insere o num//
		vetor1[TL1]=num;
		TL1++;
		if (TL1<TF)
		{
			printf("digite um numero do vetor 1:\n");
			scanf("%d",&num);
		}
		
	}
	
	//leitura do vetor2 de forma ordenada usando TL2//
	printf("digite um numero de vetor 2:\n");
	scanf("%d",&num);
	while(num>0 &&TL2<TF)
	{
		// busca da melhor posicao//
		pos=0;
		while(pos<TL2 && num>vetor2[pos])
		pos++;
		//remanejamento//
		for (i=TL2; i>pos; i--)
		vetor2[i]=vetor2[i-1];
		//insere o num//
		vetor2[TL2]=num;
		TL2++;
		if (TL2<TF)
		{
			printf("digite um numero do vetor 1:\n");
			scanf("%d",&num);
		}
	
	
	//leitur do vetor 3 de forma ordenada usando TL3//
		printf("digite um numero de vetor 3:\n");
	scanf("%d",&num);
	while(num>0 &&TL3<TF)
	{
		// busca da melhor posicao//
		pos=0;
		while(pos<TL3 && num>vetor3[pos])
		pos++;
		//remanejamento//
		for (i=TL3; i>pos; i--)
		vetor3[i]=vetor3[i-1];
		//insere o num//
		vetor3[TL3]=num;
		TL3++;
		if (TL3<TF)
		{
			printf("digite um numero do vetor 3:\n");
			scanf("%d",&num);
		}

}

	


	

