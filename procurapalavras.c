#include<stdio.h>
#include<stdlib.h>
int main()
{
	char m [35] [35];
	char var;
	printf("vamos realizar uma leitura de uma matriz 3x3 \n");
	srand(time(NULL);
	for(int linhas = 0; linhas<35; linhas++)
	{
		for(int colunas = 0; colunas<35; colunas++)
		{
		var = (rand)() %26) + 97;
		m[linhas][colunas] = (char)var;
		}	
	}
	for(int linhas = 0; linhas<35; linhas++)
	{
		for(int colunas = 0; colunas<35; colunas++)
		{
		printf("%c ",m[linhas][colunas]);	
		}	
		printf("\n");
	}
	
	return(0);
}