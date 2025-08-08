#include<stdio.h>
int main()
{
	int mes = 0;
	printf("insira o numero desejado\n");
	scanf("%d",&mes);
	
	switch(mes)
	{
		case 1:
			printf("o numero digitado corresponde a janeiro\n");
		break;
		case 2:
			printf("o numero digitado corresponde a fevereiro\n");
		break;
		case 3:
			printf("o numero digitado corresponde a março\n");
		break;
		case 4:
			printf("o numero digitado corresponde a abril\n");
		break;
		case 5:
			printf("o numero digitado corresponde a maio\n");
		break;
		case 6:
			printf("o numero digitado corresponde a junho\n");
		break;
		case 7:
			printf("o numero digitado corresponde a julho\n");
		break;
		case 8:
			printf("o numero digitado corresponde a agosto\n");
		break;
		case 9:
			printf("o numero digitado corresponde a setembro\n");
		break;
		case 10:
			printf("o numero digitado corresponde a outubro\n");
		break;
		case 11:
			printf("o numero digitado corresponde a novembro\n");
		break;
		case 12:
			printf("o numero digitado corresponde a dezembro\n");
		break;
	}
	
return(0);
}