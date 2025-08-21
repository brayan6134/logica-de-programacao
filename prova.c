#include <stdio.h>

double Potenciacao(double base, int exp);
double soma (double a, double b);
double subtracao(double a,double b);
double multiplicacao(double a,double b);
double divisao(double a,double b);
double raiz(double a);
int fatorial(int a);
int fatorial2(int a);
int main() {
	
	int opcao = 0;
	double result = 0.0;
	double a = 0.0;
	double b = 0.0;
	int fat = 0;
	int result2 = 0;
	int exp = 0;

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


		switch(opcao) {
			case 0: 
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = soma(a,b);
				printf("O resultado do calculo e: %.5lf\n",result);	
			break;
			
			case 1:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = subtracao(a,b);
				printf("O resultado do calculo e: %.5lf\n",result);	
			break;
			
			case 2:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = multiplicacao(a,b);
				printf("O resultado do calculo e: %.5lf\n",result);	
			break;
			
			case 3:
				
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);		
				
				if(b!=0) {
					result = divisao(a,b);
					printf("O resultado do calculo e: %.5lf\n",result);
				} else  {	
					printf("nao e possivel dividir por zero\n");	
				}
				
			break;
			case 4:	
				printf("Informe a base:\n");
				scanf("%lf",&a);
				printf("Informe o expoente\n");
				scanf("%d",&exp);
				result = Potenciacao(a,exp);
				printf("O resultado do calculo e: %.5lf\n",result);		
			break;
			
			case 5: 
				printf("Informe um numero positivo\n");
				scanf("%lf",&a);
				if (a < 0)
				{
					printf("Erro: nao existe raiz quadrada real de numero negativo.\n");
				}  
				else  
				{
					result = raiz(a);
					printf("o resultado do calculo e: %.5lf\n",a,result);
				}
				

			break;
			case 6:
			printf("insira o numero\n");
			scanf("%d",&fat);
			result2 = fatorial(fat);
			printf("o resultado do calculo e: %d\n",result2);
			
			break;
			case 7:
			printf("digite o numero para calcular\n");
			scanf("%d",&fat);
			result2 = fatorial2(fat);
			printf("o resultado do calculo e: %d\n",result2);
			
			
		}
		
	}while(opcao != 11);

    
	return 0;
		
}

double Potenciacao(double base, int exp)
{
	double potencia = 1.0;

	
	for(int i = 0; i < exp;i++)
	{
		potencia = base*potencia;
	}
	
	return(potencia);
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
double raiz(double a)
{
	double raiz = 0.0;
	double x = 0.0;
	x=a;
	for (int c = 0; c < 1000; c++)
	{
        raiz= 0.5 * (x + a/x);
		x = raiz;
    }
    return(raiz);
	
}
int fatorial (int a)
{
	int fatorial = 1;
	for(int c = 1; c <= a;c++){
	fatorial = fatorial*c;	
	}	
	return (fatorial);
		
}
int fatorial2 (int a)
{

	int fatorial2 = 1;
			
		if(a%2 == 0)
		{
			for(int c = 2; c <= a;c=c+2)
			{	
				fatorial2 = fatorial2*c;
			}
		}
		else
		{	
			for(int c = 1; c <= a;c=c+2)
			{
				fatorial2 = fatorial2*c;
			}
		}
	return(fatorial2);
}		