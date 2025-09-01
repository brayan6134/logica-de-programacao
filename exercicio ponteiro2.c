#include<stdio.h>
int main()
{
	int idade = 20;
	int * p;
	p = &idade;
	printf("idade antes %d",*p);
	*p = 25;
	printf("idade depois %d",*p);
return(0);	
}