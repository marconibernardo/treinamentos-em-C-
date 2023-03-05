#include<stdio.h>
#include<math.h>

int main ()
{

    int num_pedido,cod,quantidade_de_pedidos;
    float valor_pedido,comissao,soma,t1,t2,t3,total;



    printf("Digite o numero de pedido\n");
    scanf("%d",&num_pedido);


    while(num_pedido > 1)
    {
        printf("Digite a quantidade de itens pedidos\n");
        scanf("%d",&quantidade_de_pedidos);
        printf("Digite o codigo de representante\n");
         scanf("%d",&cod);
         printf("Digite o valor do pedido\n");
         scanf("%f",&valor_pedido);


        if(cod==1)
        {
            if(quantidade_de_pedidos <=20)
            {
            comissao= valor_pedido*10/100;
            printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);
            }
            

            if(quantidade_de_pedidos > 20 && quantidade_de_pedidos < 49)
            {
                comissao=valor_pedido*15/100;
                printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);
            }


            if(quantidade_de_pedidos >= 50 && quantidade_de_pedidos < 74)
            {
                comissao=valor_pedido*20/100;
                printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);
            }


            
            {
                comissao=valor_pedido*25/100;
                printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);
            }

            t1=t1+comissao;

       }




            
	   		if(cod==2)
		{
				if(quantidade_de_pedidos <=20)
				{
					comissao=valor_pedido*10/100;					
					printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);
				}
				
			
				if(quantidade_de_pedidos > 20 && quantidade_de_pedidos < 49)
				{
					comissao=valor_pedido*15/100;
					printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);
				}
			
				
			
				if(quantidade_de_pedidos >= 50 && quantidade_de_pedidos < 74)
				{
					comissao=valor_pedido*20/100;
					printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);
				}
				
				
				{
					comissao=valor_pedido*25/100;
					printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);
				}
				
				t2=t2+comissao;
	       }	       	
	   
	   
	   		if(cod==3)
	   		{
	   		
				if(quantidade_de_pedidos <=20)
				{
					comissao=valor_pedido*10/100;					
					printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);
				}
				
			
					if(quantidade_de_pedidos > 20 && quantidade_de_pedidos < 49)
				{
					comissao=valor_pedido*15/100;
					printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);
				}
			
				
			
				if(quantidade_de_pedidos >= 50 && quantidade_de_pedidos < 74)
				{
					comissao=valor_pedido*20/100;
					printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);				
				}
				
				
				{
						comissao=valor_pedido*25/100;
					   printf("O valor da comissao do pedido %d  eh : %.2f\n",num_pedido,comissao);
				}
			
					t3=t3+comissao;
	       }	       		
	   		
       		soma=soma+valor_pedido;
       		
			printf("Digite o numero de pedido\n");
			scanf("%d",&num_pedido);
				
	}
	
	total=t1+t2+t3;
	printf("O valor total de produtos processados eh %.2f\n",soma);
	printf("O total de comissao recebida pelo representante 1: e de %.2f\n",t1);
	printf("O total de comissao recebida pelo representante 2: e de %.2f\n",t2);
	printf("O total de comissao recebida pelo representante 3: e de %.2f\n",t3);
	printf("O valor total de comissoes paga pela fabrica e de %.2f\n",total);
	
}




