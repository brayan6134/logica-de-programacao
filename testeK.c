#include<stdio.h>
#include<stdlib.h>

int main()
{
	int * vetor;
	int n = 0;
	printf("digite o numero de elementos");
	scanf("%d",&n);
	
	vetor =(void*)malloc(n*sizeof(void));
	
	if(vetor == NULL)
	{
		printf("erro ao alocar memoria\n");
		return(1)
	}
	
	for(int i =0; i<n;i++)
	{
		vetor[i] = i*2;
		printf("vetor[%d]=%d\n",i,vetor);
	}
	free(vetor);
	vetor=NULL;
	
	return(0);
}