#include<stdio.h>
struct livro{
char titulo[50];
char autor[50];
double preco;	
};	
int main(){
	struct livro a1;
	printf("informe o titulo\n");
	scanf(" %[^\n]",a1.titulo);
	printf("informe o autor\n");
	scanf(" %[^\n]",a1.autor);
	printf("informe o preco\n");
	scanf("%lf",&a1.preco);
	
	printf("titulo: %s\n",a1.titulo);
	printf("autor: %s\n",a1.autor);
	printf("preco: %lf\n",a1.preco);
	
	
return(0);
}