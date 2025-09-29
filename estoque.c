#include<stdio.h>
struct variaveis{
	char produtos[40];
	int quantidade;
	double preco;
	double total;
	int opcao;
	int codigo;	
};
int main(){
	
	FILE *pont_arq;
	struct variaveis a1[1000];
	int quantidap = 0;
	int i = 0;
	int codigo = 0;
	
	
	do{
	printf("bem vindo ao estoque\n");
	printf("escolha uma das opcoes\n");
	printf("|--------------------------------------------|\n");
	printf("|        funcoes                       codigo|\n");
	printf("|      adicionar produtos                 0  |\n");
	printf("|      excluir produtos                   1  |\n");
	printf("|      buscar produto                     2  |\n");
	printf("|      listar todos os produtos           3  |\n");
    printf("|      atualizar quantidade               4  |\n");
	printf("|      valor total do estoque             5  |\n");
	printf("|      encerrar programa                  6  |\n");
	printf("|--------------------------------------------|\n");
	
	scanf("%d",&a1[i].opcao);
	
	switch(a1[i].opcao){
			case 0: 
				pont_arq = fopen("estoque.txt","a"); 
				if(pont_arq == NULL)
				{
					printf("erro o arquivo nao existe\n");
				}
				else
				{
					printf("o arquivo foi aberto com sucesso\n");
					printf("quantos produtos deseja adicionar\n");
					scanf("%d",&quantidap);
					for(int i = 0;i<quantidap;i++)
					{
						printf("escreva o nome do produto\n");
						scanf("%s",a1[i].produtos);
						printf("escreva o codigo do produto\n");
						scanf("%d",&a1[i].codigo);
						printf("escreva o preco\n");
						scanf("%lf",&a1[i].preco);
						printf("escreva a quantidade\n");
						scanf("%d",&a1[i].quantidade);
						a1[i].total = a1[i].preco*a1[i].quantidade;
						fprintf(pont_arq,"%s\n%d\n%.2lf\n%.2lf\n%d\n",a1[i].produtos,a1[i].codigo,a1[i].preco,a1[i].total,a1[i].quantidade);
						printf("produto adicionado com sucesso\n");
					}
				}
						fclose(pont_arq);
						
				fclose(pont_arq);
					
			break;
			
					case 1:
					pont_arq = fopen("estoque.txt", "r"); 
					if (pont_arq == NULL) 
					{
						printf("Erro! O arquivo nao existe.\n");
					} else 
					{
						printf("O arquivo foi aberto com sucesso.\n");
						printf("Insira o codigo do produto que deseja excluir: ");
						scanf("%d", &codigo);

						i = 0; 

						
						while (fscanf(pont_arq, "%s\n%d\n%lf\n%lf\n%d\n", a1[i].produtos,&a1[i].codigo,&a1[i].preco,&a1[i].total,&a1[i].quantidade) != EOF) 
						{   
							i++;
						}

						fclose(pont_arq); 

						int encontrado = 0;

						
						pont_arq = fopen("estoque.txt", "w");
						if (pont_arq == NULL) 
						{
							printf("Erro ao reabrir o arquivo para escrita.\n");
						} 
						else 
						{
							for (int j = 0; j < i; j++) 
							{
								if (a1[j].codigo != codigo) 
								{
									
									fprintf(pont_arq, "%s\n%d\n%.2lf\n%.2lf\n%d\n",a1[j].produtos,a1[j].codigo,a1[j].preco,a1[j].total,a1[j].quantidade); 		
								} 
								else 
								{
									encontrado = 1;
								}
							}

							fclose(pont_arq);

							if (encontrado) 
							{
								printf("Produto excluido com sucesso\n");
							} 
							else 
							{
								printf("Produto com codigo %d nao encontrado.\n", codigo);
							}
						}
					}
			break;

			
			case 2:
			pont_arq = fopen("estoque.txt", "r");
			if (pont_arq == NULL) {
				printf("Erro ao abrir o arquivo.\n");
			} else {
				printf("Digite o codigo do produto que deseja buscar: ");
				scanf("%d", &codigo);
				int encontrado = 0;
				while (fscanf(pont_arq, "%s\n%d\n%lf\n%lf\n%d\n", a1[i].produtos, &a1[i].codigo, &a1[i].preco, &a1[i].total, &a1[i].quantidade) != EOF) {
					if (a1[i].codigo == codigo) {
				printf("|-------------------|\n");
					printf("|produto:%s    |\n",a1[i].produtos);
				printf("|codigo:%d           |\n",a1[i].codigo);
				printf("|valor un:%.2lf     |\n",a1[i].preco);
				printf("|valor total:%.2lf  |\n",a1[i].total);
				printf("|quantidade:%d       |\n",a1[i].quantidade);
				printf("|-------------------|\n\n\n");	
						encontrado = 1;
						break;
					}
				}
				if (!encontrado) {
					printf("Produto com codigo %d nao encontrado.\n", codigo);
				}
				fclose(pont_arq);
			}
			break;

			
		
			
			case 3:
				 pont_arq = fopen("estoque.txt","r"); 
				 if(pont_arq == NULL){
					 printf("erro o arquivo nao existe\n");
				 }
				 else
				 {
					 printf("o arquivo foi aberto com sucesso\n");
					while(fscanf(pont_arq,"%s\n%d\n%lf\n%lf\n%d\n",a1[i].produtos,&a1[i].codigo,&a1[i].preco,&a1[i].total,&a1[i].quantidade)!=EOF)
					{
				printf("|-------------------|\n");
					printf("|produto:%s    |\n",a1[i].produtos);
				printf("|codigo:%d           |\n",a1[i].codigo);
				printf("|valor un:%.2lf     |\n",a1[i].preco);
				printf("|valor total:%.2lf  |\n",a1[i].total);
				printf("|quantidade:%d       |\n",a1[i].quantidade);
				printf("|-------------------|\n\n\n");		
						i++;	
					}
				 }
				fclose(pont_arq);	
			break;
			
			
			case 4:
			pont_arq = fopen("estoque.txt", "r");
			if (pont_arq == NULL) {
				printf("Erro ao abrir o arquivo.\n");
			} else {
				printf("Digite o codigo do produto que deseja atualizar: ");
				scanf("%d", &codigo);
				i = 0;
				while (fscanf(pont_arq, "%s\n%d\n%lf\n%lf\n%d\n", a1[i].produtos, &a1[i].codigo, &a1[i].preco, &a1[i].total, &a1[i].quantidade) != EOF) {
					i++;
				}
				fclose(pont_arq);

				int atualizado = 0;
				for (int j = 0; j < i; j++) {
					if (a1[j].codigo == codigo) {
						printf("Digite a nova quantidade: ");
						scanf("%d", &a1[j].quantidade);
						a1[j].total = a1[j].quantidade * a1[j].preco;
						atualizado = 1;
						break;
					}
				}

				if (atualizado) {
					pont_arq = fopen("estoque.txt", "w");
					for (int j = 0; j < i; j++) {
						fprintf(pont_arq, "%s\n%d\n%.2lf\n%.2lf\n%d\n", a1[j].produtos, a1[j].codigo, a1[j].preco, a1[j].total, a1[j].quantidade);
					}
					fclose(pont_arq);
					printf("Quantidade atualizada com sucesso.\n");
				} else {
					printf("Produto com codigo %d nao encontrado.\n", codigo);
				}
			}
			break;

				
			case 5:
				pont_arq = fopen("estoque.txt", "r");
				if (pont_arq == NULL) {
					printf("Erro ao abrir o arquivo.\n");
				} else {
					double somaTotal = 0.0;
					while (fscanf(pont_arq, "%s\n%d\n%lf\n%lf\n%d\n", a1[i].produtos, &a1[i].codigo, &a1[i].preco, &a1[i].total, &a1[i].quantidade) != EOF) {
						somaTotal += a1[i].total;
						i++;
					}
					printf("Valor total do estoque: R$ %.2lf\n", somaTotal);
					fclose(pont_arq);
				}
				break;
						
			case 6:
			printf("fechando o estoque");
		       
					
			break;
	}
	}while(a1[i].opcao <= 5);
	 
	 return(0);
}