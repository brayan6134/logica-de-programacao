#include<stdio.h>
int main()
{
	int quantidade = 0;
	int temp = 0;
	
	
	printf("digite");
	scanf("%d",&quantidade);
	int vetor[quantidade];
	
	for (int a = 0; a < quantidade; a++)
	{
		printf("Informe o numero desejado: ");
		scanf("%d",&vetor[a]);
		printf("\n");
	}
	
	for(int i = 0;i<quantidade;i++)
	{
		for(int y = 0;y<quantidade;y++)
		{
		
			if(vetor[i]<vetor[y])
			{
				temp= vetor[i];
				vetor[i]=vetor[y];
				vetor[y] = temp;
			}
			
		}
	
	}
	
	for (int a = 0; a < quantidade; a++)
	{
		printf("%d ",vetor[a]);
	}
	
	
	return(0);
}