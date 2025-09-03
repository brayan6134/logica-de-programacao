#include<stdio.h>
struct aluno{
	char nome[50];
	int idade;
	float nota;
};
int main(){
	struct aluno a1;
	scanf("%s",a1.nome);
	scanf("%d",&a1.idade);
	scanf("%f",&a1.nota);
	
	printf("aluno: %s\n",a1.nome);
	printf("idade: %d\n",a1.idade);
	printf("nota: %.0f\n",a1.nota);

	return(0);
}