#include<stdio.h>
 int main(){
	 FILE *pont_arq;
	 char palavra[30];
	 int idade = 0;
	 
	 //abrindo o arquivo
	 pont_arq = fopen("arquivo.txt","r"); 
	 if(pont_arq == NULL){
		 printf("erro o arquivo nao existe\n");
	 }
	 else{
		 printf("o arquivo foi criado com sucesso\n");
	while(fscanf(pont_arq,"%s\n%d\n",palavra,&idade)!=EOF){
	printf("%s\n%d\n",palavra,idade);
		}
	}
	 fclose(pont_arq);
	 return(0);
 }