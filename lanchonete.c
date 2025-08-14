#include<stdio.h>
int main()
{
	//lanchonete senai
	int quantidade = 0;
	double preco = 0.0;
	char nome[25];
	double result = 0.0;
	int codigo = 0;
	char escolha;
	char escolha2;

	printf("Seja bem-vindo a nossa lanchonete\n");
	printf("informe o seu nome\n");
	scanf("%s",&nome);
	printf("escolha os produtos desejados em nosso menu\n");
	printf("|--------------------------------------------|\n");
	printf("| produtos              codigo          preco|\n");
	printf("| xsalada                 1             12,00|\n");
	printf("| dogao simples           2             12,00|\n");
	printf("| dogao duplo             3             14,00|\n");
	printf("| dogao triplo            4             16,00|\n");
	printf("|--------------------------------------------|\n");
	do{
		printf("qual o produto desejados\n");
		scanf("%d",&codigo);
		if (codigo>4)
		{
		printf("esse produto nao existe\n");
		break;
		}
		else if (codigo<4)
		{
			printf("qual a quantidade desejada\n");
			scanf("%d",&quantidade);
			switch(codigo)
			{
				case 1:
					result = result + (12.00*quantidade); 
				break;
				case 2:
					result = result + (12.00*quantidade); 
				break;
				case 3:
					result = result + (14.00*quantidade);
				break;
				case 4:
					result = result + (16.00*quantidade);
				break;
			}
		}
				
		printf("deseja outro produto S = sim ou N = nao\n");
		scanf(" %c",&escolha);
	}while(escolha == 'N');
	printf("confirmar pedido?\n");
	printf("S = sim ou N = nao\n");
	scanf(" %c",&escolha2);
	if(escolha2 == 'S')
	{
	printf("o valor total dos produtos e %.2lf\n",result);
	printf("pedido numero 01 de %s\n",nome);
	}
    else if(escolha2 == 'N')
	{
	printf("pedido cancelado\n");	
	}

return(0);	
}