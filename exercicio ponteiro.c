#include<stdio.h>
int main()
{
	int num = 50;
	int * prt;
	prt = &num;
	
	printf("valor variavel sem ponteiro %d\n",num);
	printf("endereco de memoria num = %x\n",&num);
	printf("O valor armazenado no ponteiro = %x\n",&prt);
	printf("O conteudo apontado por ptr = %d\n",*prt);
	
return(0);	
}