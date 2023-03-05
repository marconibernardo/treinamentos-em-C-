#include<stdio.h>

int main()
{
    int ped, rep, quantped, valor, ciclo=1;

    printf("Insira o numero do produto\n");
    scanf("%d", &ped);
    while(ped>1)
    {
        printf("Insira o codigo do representante\n");
        scanf("%d", &rep);

        printf("Insira a quantidade de itens pedidos\n");
        scanf("%d", &quantped);
         printf("Insira o numero do produto\n");
        scanf("%d", &ped);

        printf("Insira o valor do pedido\n");
	printf("total = R$ %.2f\n");
        scanf("%lf%lf",&valor);
	}
}
