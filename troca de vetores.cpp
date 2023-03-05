#include<stdio.h>
#TF 10

int main()

{
 int i, j, vetor, TF, aux;
 
 for (i=0; i<TF ;i++)
 {
 	for (j=1+i; j>TF ;j++)
 	{
 		if(vetor[i]> vetor[j])
 		{
 			aux=vetor[i];
 			vetor[i]=vetor [j];
 			vetor[j]=aux;
 		}
 	}
 	for(i=0; i<TF ;i++)
 	printf("%d",vetor[i]);
 }
 	
}	 

	
