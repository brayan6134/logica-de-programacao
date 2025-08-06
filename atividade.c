#include<stdio.h>
int main()
{
	int dia = 0;
	printf("porfavor insira o numero para indentificar um numero da semana\n");
	scanf("%d",&dia);
	
	switch(dia)
	{
		case 1:
			printf("O numero informado corresponde ao domingo\n");
		break;
		case 2:
			printf("O numero informado corresponde ao segunda\n");
		break;
		case 3:
			printf("O numero informado corresponde ao terça\n");
		break;
		case 4:
			printf("O numero informado corresponde ao quarta\n");
		break;
		case 5:
			printf("O numero informado corresponde ao quinta\n");
		break;
		case 6:
			printf("O numero informado corresponde ao sexta\n");
		break;
		case 7:
			printf("O numero informado corresponde ao sabado\n");
		break;
	}
	
	return(0);
}