#include<stdio.h>

int main()
{
	int vet [10];
	int par = 0;
	int impar = 0;
	int b = 0;
	int c = 0;
	printf("digite 10 numeros\n");
	while(b < 10)
	{	
		scanf("%d",&vet[b]);
		b++;
	}
	while(c<10)
	{
		if(vet[c] %2 == 0)	
		{
			par++;
		}
		else
		{
			impar++;
		}
		c++;
	}
	printf("A quantidade de numeros pares sao %d e impares %d\n",par,impar); 
	return(0);
}