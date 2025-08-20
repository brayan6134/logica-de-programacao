#include <stdio.h>

double Potenciacao(double base, int exp);
double soma (double a, double b);
double subtracao(double a,double b);
double multiplicacao(double a,double b);
double divisao(double a,double b);
double raiz_quadrada(double a, double x, double novoX);
int main() 
{
	
	int opcao = 0;
	double result = 0.0;
	double a = 0.0;
	double b = 0.0;
	int exp = 0;
	double x = 0.0;
	double novox = 0.0;

	
	
	printf("Bem vindo a minha calculadora 1.0\n");
	printf("escolha uma opcao\n");
	
	
do{
		printf("|----------------------------|\n");
		printf("|0 - soma                    |\n");
		printf("|1 - subtracao               |\n");
		printf("|2 - multiplicacao	     |\n");
		printf("|3 - Divisao                 |\n");
		printf("|4 - potenciacao             |\n");
		printf("|5 - raiz quadrada           |\n");
		printf("|6 - fatorial simples        |\n");
		printf("|7 - fatorial duplo          |\n");
		printf("|8 -  MDC                    |\n");
		printf("|9 -  MMC                    |\n");
		printf("|10- equacao de segundo grau |\n");
		printf("|11 - Sair                   |\n");
		printf("|----------------------------|\n");
		
		scanf("%d",&opcao);

		
		switch(opcao)
{
		
		case 0:
		{
			printf("Informe os numeros que deseja realizar a operacao:\n");
			scanf("%lf",&a);
			printf("Informe outro numero\n");
			scanf("%lf",&b);
			result = soma(a,b);
			printf("O resultado e %.5lf\n",result);	
		}
		
		break;
		case 1:
		{
			printf("Informe os numeros que deseja realizar a operacao:\n");
			scanf("%lf",&a);
			printf("Informe outro numero\n");
			scanf("%lf",&b);
			result = subtracao(a,b);
			printf("O resultado e %.5lf\n",result);	
		}
		
		break;
		case 2:
		{
			printf("Informe os numeros que deseja realizar a operacao:\n");
			scanf("%lf",&a);
			printf("Informe outro numero\n");
			scanf("%lf",&b);
			result = multiplicacao(a,b);
			printf("O resultado e %.5lf\n",result);	
		}	
		
		break;
		case 3:
	{

			printf("Informe os numeros que deseja realizar a operacao:\n");
			scanf("%lf",&a);
			printf("Informe outro numero\n");
			scanf("%lf",&b);		
		if(b!=0)
		{
			result = divisao(a,b);
			printf("O resultado e %.5lf\n",result);
		}
		else 
		{	
		printf("nao e possivel dividir por zero\n");	
		}	
	}
		
		break;
		case 4:
		{
				printf("Informe a base:\n");
				scanf("%lf",&a);
				printf("Informe o expoente\n");
				scanf("%d",&exp);
				result = Potenciacao(a,exp);
				printf("O resultado e: %.2lf\n",result);		
		}

        break;
		case 5:
		{
		printf("informe o numero positivo\n");
		scanf("%lf",&a);
		result = raiz_quadrada(a,x,novox);
		printf("o valor de raiz quadrada de %.5lf e %.5lf/n",x,novox);	
		}
		
		break;
}
		}while(opcao == 10);




    
    return 0;
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
double raiz_quadrada(double a, double x, double novox)
{
    if (a < 0) 
	{
        return -1;
    }

    double x = a / 2.0; 
    double novox;

    for (int i = 0; i < 1000; i++) 
	{
        novox = 0.5 * (x + a / x);
        x = novox;
    }

    return(raiz_quadrada);
}	