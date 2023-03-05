#include<stdio.h>
#define TF 5

int main()

{
	int vet1[TF], vet2[TF],vUniao[TF*2],vIntersecao[TF],TLU=0,TLI=0,i,
	pos;
	//	leitura do vet1//
	for(i=0; i<TF; i++)
	{
		printf("digite o %do.num do Vetor1:\n",i+1);
		scanf("%d",&vet1[i]);
		
	}
	
	
	//leitura do vet2//
	
	for(i=0; i<TF; i++)
	{
		printf("digite o %do.num do Vetor2:\n",i+1);
		scanf("%d",&vet2[i]);
		
	}
	//uniao//
	for (i=0;i<TF;i++)
	{
		pos=0;
		while(pos<TLU && vet1[i]!=vUniao[pos])
		pos++;
		
		if (pos==TLU)
		{
			vUniao[TLU]=vet1[i];
			TLU++;
		}
	}
	
	for (i=0;i<TF;i++)
	{
		pos=0;
		while(pos<TLU && vet2[i]!=vUniao[pos])
		pos++;
		
		if (pos==TLU)
		{
			vUniao[TLU]=vet2[i];
			TLU++;
		}
	}
	
	//intersecao//
	
	
	
	//exibe os vetores resultados//
	printf("resultado da uniao:\n");
	for(i=1; i<TLU;i++)
	printf("%d",vUniao[i]);
	printf("resuntado da intersecao:\n");
	for (i=0; i<TLI; i++)
	printf("%d",vIntersecao[i]);
		
}
