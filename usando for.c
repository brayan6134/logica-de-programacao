#include<stdio.h>

int main()
{
	int vet [10];
	int impar = 0;
	int par = 0;
	printf("digite 10 numeros\n");
	for(int i = 0; i<10;i++)
	{
		scanf("%d",&vet[i]);
	}
	for(int k = 0; k<10;k++)
	{
		if(vet[k] %2 == 0)
		{	
			par++;
		}
		else
		{	
			impar++;
		}
	}
	
	printf("A quantidade de numeros pares sao %d e impares %d\n",par,impar); 
	return(0);
}