#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

void LerPavra(char * palavra);
int TamanhoPalavra(char * palavra);
void GerarTabuleiro(char *tabuleiro,int tam);
void ImprimirTabuleiro(char *tabuleiro,int tamanho_final);
void Palavra_Vertical(char *tabuleiro, int tam_tabuleiro, char *palavra, int tam_palavra);
void Palavra_Horizontal(char *tabuleiro, int tam_tabuleiro, char *palavra, int tam_palavra);
struct palavra{
	char palavra_um[25];
	char palavra_dois[25];
	int t_palavra_um = 0;
	int t_palavra_dois = 0;
	int tamanho_final = 0;
};
int main()
{
	struct palavra a1;
	
	printf("Bem vindo ao caca palavra!\n");
	LerPavra(a1palavra_um);
	LerPavra(a1palavra_dois);
	a1t_palavra_um = TamanhoPalavra(a1palavra_um);
	a1t_palavra_dois = TamanhoPalavra(a1palavra_dois);
	
	
	if(a1.t_palavra_um >= a1.t_palavra_dois)
	{
		tamanho_final = t_palavra_um+6;
	}
	else
	{
		a1.tamanho_final = a1.t_palavra_dois+6;
	}
	char tabuleiro[a1.tamanho_final][a1.tamanho_final];
	GerarTabuleiro((char*)tabuleiro,a1.tamanho_final);

	Palavra_Horizontal((char*)tabuleiro,a1.tamanho_final,a1.palavra_um,a1.t_palavra_um);
	Palavra_Vertical((char*)tabuleiro,a1.tamanho_final,a1.palavra_dois,a1.t_palavra_dois);
	ImprimirTabuleiro((char*)tabuleiro,a1.tamanho_final);




	return(0);
}

void LerPavra(char * palavra)
{
	printf("Informe a palavra que sera escondida.\n");
	scanf("%s",palavra);
}

int TamanhoPalavra(char * palavra)
{
	int i = 0;
	int tam = 0;
	while(palavra[i] != '\0')
	{
		tam++;
		i++;
	}
	
	return(tam);
}

void GerarTabuleiro(char *tabuleiro,int tam)
{
	srand(time(NULL));
	for(int i = 0; i < tam; i++)
	{
		for(int k = 0; k < tam; k++)
		{	
			//tabuleiro[i][k] = rand() % 26 + 97;
			tabuleiro[i*tam+k] = rand() % 26 + 97;
		}
	}
	
}

void ImprimirTabuleiro(char *tabuleiro, int tam)
{
	for(int i = 0; i < tam; i++)
	{
		for(int k = 0; k < tam; k++)
		{
			//printf(" %c ",tabuleiro[i][k]);
			printf(" %c ",tabuleiro[i*tam+k]);
		}
		printf("\n");
	}
}

void Palavra_Horizontal(char *tabuleiro, int tam_tabuleiro, char *palavra, int tam_palavra)
{
	int sorteiaColuna = rand()%2;
	int sorteiaLinha = rand()%tam_tabuleiro;
	int j = 0;
	/*for(int l = sorteiaLinha; l < tam_tabuleiro; l++)
	{
		for(int c = sorteiaColuna; j < tam_palavra ; c++)
		{
			tabuleiro[l][c] = palavra[j];
			j++;
		}
		break;
	}*/
	
	
	for(int l = 0; l < tam_tabuleiro; l++)
	{
		for(int c = sorteiaLinha; j < tam_palavra ; c++)
		{
			tabuleiro[(sorteiaLinha+l)*tam_tabuleiro+(c+sorteiaColuna)] = palavra[j];
			j++;
		}
		break;
	}
	
}

void Palavra_Vertical(char *tabuleiro, int tam_tabuleiro, char *palavra, int tam_palavra)
{
	int sorteiaColuna = rand()%2;
	int sorteiaLinha = rand()%tam_tabuleiro;
	int j = 0;
	int c = 0;
	for(int l = 0; l < tam_tabuleiro; l++)
	{
		if(c < tam_tabuleiro && j < tam_palavra)
		{
			tabuleiro[(sorteiaLinha+l)*tam_tabuleiro+(c+sorteiaColuna)] = palavra[j];
			j++;
			c++;
		}
		c = 0;
	}
}