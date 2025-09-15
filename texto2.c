 #include<stdio.h>
 
 struct variaveis{
	 char palavra[30];
	 int idade;
 };
 
 int main(){ 
 
 FILE *pont_arq;
	struct variaveis a1;
	 pont_arq = fopen("arquivo.txt","a"); 
	 if(pont_arq == NULL){
		 printf("erro o arquivo nao existe\n");
	 }
	 else{
		 printf("o arquivo foi criado com sucesso\n");
	 for(int i=0;i<5;i++){
	
		 printf("escreva o nome:\n");
		 scanf("%s",a1.palavra);
		 printf("escreva a idade\n");
		 scanf("%d",&a1.idade);
		 
		 //usando fprintf para armezenar a string no arquivo
		 fprintf(pont_arq,"%s\n%d\n",a1.palavra,a1.idade);
	 }
	 }
	 fclose(pont_arq);
	 return(0);
 }