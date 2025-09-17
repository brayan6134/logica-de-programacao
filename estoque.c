#include<stdio.h>
struct variaveis{
	char produtos[40];
	int quantidade;
	double preco;
	double total;
	int opcao;
};
int main(){
 FILE *pont_arq;
	struct variaveis a1;
	
	do{
	printf("bem vindo ao estoque\n");
	printf("escolha uma das opcoes\n");
	printf("|--------------------------------------------|\n");
	printf("|        funcoes                       codigo|\n");
	printf("|      adicionar produtos                 0  |\n");
	printf("|      subtrair produtos                  1  |\n");
	printf("|      buscar produto                     2  |\n");
	printf("|      listar todos os produtos           3  |\n");
    printf("|      atualizar quantidade               4  |\n");
	printf("|      valor total do estoque             5  |\n");
	printf("|      encerrar programa                  6  |\n");
	printf("|--------------------------------------------|\n");
	
	scanf("%d",&a1.opcao);
	
	switch(a1.opcao){
			case 0: 
				pont_arq = fopen("estoque.txt","a"); 
		if(pont_arq == NULL){
			printf("erro o arquivo nao existe\n");
		}
		else{
			printf("o arquivo foi aberto com sucesso\n");
			 for(int i=0;i<1;i++)
	
				 printf("escreva o nome do produto\n");
				 scanf("%s",a1.produtos);
				 printf("escreva o preco\n");
				 scanf("%lf",&a1.preco);
				 printf("escreva a quantidade\n");
				 scanf("%d",&a1.quantidade);
		 
		 fscanf(pont_arq," %s:produto\n%.2lf:valor un\n%d:quantidade\n",a1.produtos,a1.preco,a1.quantidade);
		 a1.total = a1.preco*a1.quantidade;
		 fprintf(pont_arq," produto:%s\nvalor un:%.2lf\nvalor total:%.2lf\nquantidade:%d",a1.produtos,a1.preco,a1.total,a1.quantidade);
		printf("produto adicionado com sucesso\n");
		fclose(pont_arq);
	 }
			break;
			
			case 1:
				
			break;
			
			case 2:
			
			break;
			
			case 3:
				 pont_arq = fopen("estoque.txt","r"); 
				 if(pont_arq == NULL){
					 printf("erro o arquivo nao existe\n");
				 }
				 else
				 {
					 printf("o arquivo foi aberto com sucesso\n");
					while(fscanf(pont_arq," %s\n%lf\n%lf\n%d\n",a1.produtos,&a1.preco,&a1.total,&a1.quantidade)!=EOF)
					{
						printf(" produto:%s\nvalor un:%.2lf\nvalor total:%.2lf\nquantidade:%d\n",a1.produtos,a1.preco,a1.total,a1.quantidade);
					}
					fclose(pont_arq);	
				}
			break;
			
			case 4:	
				
			break;
			
			case 5: 
			
			break;
			
			case 6:
			printf("fechando o estoque");
			break;
	}
	}while(a1.opcao <= 5);
	 
	
	return(0);
}