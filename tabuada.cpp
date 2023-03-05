#include<stdio.h>

int main()
{
	int i=1;
	int tabuada;
	printf("Qual a tabuada?\n");
	scanf("%d",&tabuada);
	while(i<=10)
	{
		printf("%d x %d = %d\n", tabuada,i,tabuada*i);
		i++;
	}
}
