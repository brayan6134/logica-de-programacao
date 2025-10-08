#include<stdio.h>
struct variaveis{
	char produtos[40];
	int quantidade;
	double preco;
	double total;
	int codigo;	
};
int main(){
	
	FILE *pont_arq;
	struct variaveis a1[1000];
	int quantidap = 0;
	int i = 0;
	int codigo = 0;
	double somaTotal = 0.0;
	int opcao;
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
	printf("|      Filtrar e Ordenar                  6  |\n");
	printf("|      sair do estoque                    7  |\n");
	printf("|--------------------------------------------|\n");
	
	scanf("%d",&opcao);
	
	switch(opcao){
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
					for(int k = 0;k<quantidap;k++)
					{
						printf("escreva o nome do produto\n");
						scanf("%s",a1[k].produtos);
						printf("escreva o codigo do produto\n");
						scanf("%d",&a1[k].codigo);
						printf("escreva o preco\n");
						scanf("%lf",&a1[k].preco);
						printf("escreva a quantidade\n");
						scanf("%d",&a1[k].quantidade);
						a1[k].total = a1[k].preco*a1[k].quantidade;
						fprintf(pont_arq,"%s\n%d\n%.2lf\n%.2lf\n%d\n",a1[k].produtos,a1[k].codigo,a1[k].preco,a1[k].total,a1[k].quantidade);
						printf("produto adicionado com sucesso\n");
					}
				}		
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
			if (pont_arq == NULL) 
			{
				printf("Erro ao abrir o arquivo.\n");
			} else 
			{
				printf("Digite o codigo do produto que deseja buscar: ");
				scanf("%d", &codigo);
				int encontrado = 0;
				while (fscanf(pont_arq, "%s\n%d\n%lf\n%lf\n%d\n", a1[i].produtos, &a1[i].codigo, &a1[i].preco, &a1[i].total, &a1[i].quantidade) != EOF)
				{
					if (a1[i].codigo == codigo) 
					{
				printf("|-------------------|\n");
					printf("|produto:%s     \n",a1[i].produtos);
				printf("|codigo:%d           \n",a1[i].codigo);
				printf("|valor un:%.2lf     \n",a1[i].preco);
				printf("|valor total:%.2lf  \n",a1[i].total);
				printf("|quantidade:%d       \n",a1[i].quantidade);
				printf("|-------------------|\n\n\n");	
						encontrado = 1;
						break;
					}
				}
				if (!encontrado) 
				{
					printf("Produto com codigo %d nao encontrado.\n", codigo);
				}
				fclose(pont_arq);
			}
			break;
			case 3:
				 pont_arq = fopen("estoque.txt","r"); 
				 if(pont_arq == NULL)
				 {
					 printf("erro o arquivo nao existe\n");
				 }
				 else
				 {
					 printf("o arquivo foi aberto com sucesso\n");
					while(fscanf(pont_arq,"%s\n%d\n%lf\n%lf\n%d\n",a1[i].produtos,&a1[i].codigo,&a1[i].preco,&a1[i].total,&a1[i].quantidade)!=EOF)
					{
				printf("|-------------------\n");
					printf("|produto:%s    \n",a1[i].produtos);
				printf("|codigo:%d           \n",a1[i].codigo);
				printf("|valor un:%.2lf     \n",a1[i].preco);
				printf("|valor total:%.2lf  \n",a1[i].total);
				printf("|quantidade:%d       \n",a1[i].quantidade);
				printf("|-------------------\n\n\n");		
						i++;	
					}
				 }
				fclose(pont_arq);	
			break;
			case 4:
			pont_arq = fopen("estoque.txt", "r");
			if (pont_arq == NULL) 
			{
				printf("Erro ao abrir o arquivo.\n");
			} else 
			{
				printf("Digite o codigo do produto que deseja atualizar: ");
				scanf("%d", &codigo);
				i = 0;
				while (fscanf(pont_arq, "%s\n%d\n%lf\n%lf\n%d\n", a1[i].produtos, &a1[i].codigo, &a1[i].preco, &a1[i].total, &a1[i].quantidade) != EOF) 
				{
					i++;
				}
				fclose(pont_arq);

				int atualizado = 0;
				for (int j = 0; j < i; j++) 
				{
					if (a1[j].codigo == codigo) 
					{
						printf("Digite a nova quantidade: ");
						scanf("%d", &a1[j].quantidade);
						a1[j].total = a1[j].quantidade * a1[j].preco;
						atualizado = 1;
						break;
					}
				}

				if (atualizado) 
				{
					pont_arq = fopen("estoque.txt", "w");
					for (int j = 0; j < i; j++) 
					{
						fprintf(pont_arq, "%s\n%d\n%.2lf\n%.2lf\n%d\n", a1[j].produtos, a1[j].codigo, a1[j].preco, a1[j].total, a1[j].quantidade);
					}
					fclose(pont_arq);
					printf("Quantidade atualizada com sucesso.\n");
				} else 
				{
					printf("Produto com codigo %d nao encontrado.\n", codigo);
				}
			}
			break;
			case 5:
				pont_arq = fopen("estoque.txt", "r");
				if (pont_arq == NULL) 
				{
					printf("Erro ao abrir o arquivo.\n");
				} 
				else 
				{
					while (fscanf(pont_arq, "%s\n%d\n%lf\n%lf\n%d\n", a1[i].produtos, &a1[i].codigo, &a1[i].preco, &a1[i].total, &a1[i].quantidade) != EOF) 
					{
						somaTotal += a1[i].total;
						i++;
					}
					printf("Valor total do estoque: R$ %.2lf\n",somaTotal);
					fclose(pont_arq);
				}
			break;	

			case 6:
			pont_arq = fopen("estoque.txt", "r");
			if (pont_arq == NULL) 
			{
				printf("Erro ao abrir o arquivo.\n");
			} else 
			{
				i = 0;
				while (fscanf(pont_arq, "%s\n%d\n%lf\n%lf\n%d\n", a1[i].produtos, &a1[i].codigo, &a1[i].preco, &a1[i].total, &a1[i].quantidade) != EOF) 
				{
					i++;
				}
				fclose(pont_arq);

				int totalProdutos = i;
				int opcaoOrdenacao;

				printf("\nEscolha como deseja ordenar os produtos:\n");
				printf("|-------------------------------------------|\n");
				printf("|   1   | Ordenar por nome do produto        |\n");
				printf("|   2   | Ordenar por codigo do produto      |\n");
				printf("|   3   | Ordenar por quantidade             |\n");
				printf("|   4   | Ordenar por valor do produto       |\n");
				printf("|-------------------------------------------|\n");
				scanf("%d", &opcaoOrdenacao);

				int ordemAlfabetica = 0;

				if (opcaoOrdenacao == 1) 
				{
					printf("\n|-------------------------------------------|\n");
					printf("|   1   | Crescente - Alfabetica A -> Z      |\n");
					printf("|   2   | Decrescente - Alfabetica Z -> A    |\n");
					printf("|-------------------------------------------|\n");
					scanf("%d", &ordemAlfabetica);
				}

				for (int x = 0; x < totalProdutos - 1; x++)
				{
					for (int y = 0; y < totalProdutos - x - 1; y++) 
					{
						int troca = 0;

						if (opcaoOrdenacao == 1)
						{
						  
							int k = 0;
							while (a1[y].produtos[k] != '\0' && a1[y + 1].produtos[k] != '\0') 
							{
								if (a1[y].produtos[k] != a1[y + 1].produtos[k])
								{
									if (ordemAlfabetica == 1) 
									{
										if (a1[y].produtos[k] < a1[y + 1].produtos[k]) 
										{
											troca = 1;
										}
									} else 
									{ 
										if (a1[y].produtos[k] > a1[y + 1].produtos[k]) 
										{
											troca = 1;
										}
									}
									break;
								}
								k++;
							}
						} else if (opcaoOrdenacao == 2) 
						{
							if (a1[y].codigo > a1[y + 1].codigo) troca = 1;
						} else if (opcaoOrdenacao == 3) 
						{
							if (a1[y].quantidade > a1[y + 1].quantidade) troca = 1;
						} else if (opcaoOrdenacao == 4) 
						{
							if (a1[y].preco > a1[y + 1].preco) troca = 1;
						}

						if (troca) 
						{
							struct variaveis temp = a1[y];
							a1[y] = a1[y + 1];
							a1[y + 1] = temp;
						}
					}
				}

				printf("\nProdutos ordenados:\n");
				for (int j = 0; j < totalProdutos; j++) 
				{
					printf("|-------------------\n");
					printf("|produto: %s\n", a1[j].produtos);
					printf("|codigo: %d\n", a1[j].codigo);
					printf("|valor un: %.2lf\n", a1[j].preco);
					printf("|valor total: %.2lf\n", a1[j].total);
					printf("|quantidade: %d\n", a1[j].quantidade);
					printf("|-------------------\n\n");
				}
			}
			break;

			case 7:
			printf("fechando o estoque");
			break;
			
			
	}
	}while(opcao != 7);
	 
	 return(0);
}