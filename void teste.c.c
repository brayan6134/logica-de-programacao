#include<stdio.h>

double Potenciacao(double base, int exp);
double soma (double a, double b);
double subtracao(double a,double b);
double multiplicacao(double a,double b);
double divisao(double a,double b);
int main()
{
	int opcao = 0;
	double result = 0.0;
	double a = 0.0;
	double b = 0.0;
	int exp = 0;
	
	
	do{
		printf("Escolha uma opcao abaixo\n");
		printf("------------------------\n");
		printf("|1 - Soma               |\n");
		printf("|2 - Subtracao          |\n");
		printf("|3 - Multiplicacao      |\n");
		printf("|4 - Divisao            |\n");
		printf("|5 - Potenciacao        |\n");
		printf("|6 - Sair               |\n");
		printf("------------------------\n");
		
		scanf("%d",&opcao);

		
		switch(opcao)
		{
			case 1:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = soma(a,b);
				printf("O resultado e: %.1lf\n",result);
			break;
			case 2:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = subtracao(a,b);
				printf("O resultado e: %.1lf\n",result);
			break;
			case 3:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = multiplicacao(a,b);
				printf("O resultado e: %.1lf\n",result);
			break;
			case 4:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				if(b ==0)
				{
					printf("Nao e possivel realizar divisao por 0\n");
				}
				else
				{
					result = divisao(a,b);
					printf("O resultado e: %.1lf\n",result);
				}
			break;
			case 5:
				printf("Informe a base:\n");
				scanf("%lf",&a);
				printf("Informe o expoente\n");
				scanf("%d",&exp);
				result = Potenciacao(a,exp);
				printf("O resultado e: %.2lf\n",result);
				
			
			break;
		}
		
	}while(opcao != 6);

	return(0);
}


double Potenciacao(double base, int exp)
{
	double result = 1.0;
	
	for(int i = 0; i < exp;i++)
	{
		result = base*result;
	}
	
	return(result);
}
double soma (double a, double b)
{
	
	double soma = 0.0;
	soma = a+b;
	return(soma);
}
double subtracao (double a, double b)
{
	
	double subtracao = 0.0;
	subtracao = a-b;
	return(subtracao);
}
double multiplicacao (double a, double b)
{
	
	double multiplicacao = 0.0;
	multiplicacao = a*b;
	return(multiplicacao);
}
double divisao (double a, double b)
{
	
	double divisao = 0.0;
	divisao = a/b;
	return(divisao);
}
