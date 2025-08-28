#include <stdio.h>

double Potenciacao(double base, int exp);
double soma (double a, double b);
double subtracao(double a,double b);
double multiplicacao(double a,double b);
double divisao(double a,double b);
double raiz(double a);
int fatorial(int a);
int fatorial2(int a);
int mdc (int a,int b);
int mmc(int a,int b);
void equacao(double a, double b, double c); 
int main() {
	
	double result = 0.0;
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	int opcao = 0;
	int a1 = 0;
	int b1 = 0;
	int result2 = 0;

	printf("Bem vindo a minha calculadora 1.0\n");
	printf("escolha uma opcao abaixo\n");
	
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
				scanf("%d",&b1);
				result = Potenciacao(a,b1);
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
					printf("o resultado do calculo e: %.5lf\n",result);
				}
			break;
			
			case 6:
			printf("informe o numero\n");
			scanf("%d",&a1);
			if(a1==0){
			printf("o fatorial de 0 e igual a 1 por convencao matematica\n");
			}
			else{
			result2 = fatorial(a1);
			printf("o resultado do calculo e: %d\n",result2);
			}
			break;
			
			case 7:
			printf("digite o numero para calcular\n");
			scanf("%d",&a1);
			if(a1==0){
			printf("o fatorial duplo de 0 e igual a 1 por convencao matematica\n");
			}
			else{ 
			result2 = fatorial2(a1);
			printf("o resultado do calculo e: %d\n",result2);
			}
			break;
			
			case 8:
			printf("Informe o primeiro numero inteiro:\n");
			scanf("%d", &a1);
			printf("Informe o segundo numero inteiro:\n");
			scanf("%d", &b1);
			result2 = mdc(a1,b1);
			printf("O resultado do calculo e: %d\n", result2);
			break;

			case 9:
			printf("Informe o primeiro numero inteiro:\n");
			scanf("%d", &a1);
			printf("Informe o segundo numero inteiro:\n");
			scanf("%d", &b1);
			result2 = mmc(a1,b1);
			printf("O resultado do calculo e: %d\n", result2);
			break;
			
			case 10:
                printf("Informe os coeficientes a, b e c:\n");
                scanf("%lf%lf%lf", &a, &b, &c);
                equacao(a, b, c);
				//printf("O resultado do calculo e: %lf\n",result);
                break;
				
			case 11:
			printf("obrigado por usar minha calculadora 1.0");
			break;

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
int mdc (int a,int b)
{
    while (b != 0) {
        int temp = b; // Armazena o valor de b
        b = a % b;    // b se torna o resto da divisão de a por b
        a = temp;     // a se torna o antigo valor de b
    }
	int mdc = a;
    return (mdc); // Quando b é 0, a é o MDC	
}	
int mmc(int a, int b)
{
    int resultado_mdc = mdc(a, b);
    return (a * b) / resultado_mdc;
}
void equacao(double a, double b, double c) 
{
    double delta = b * b - 4 * a * c;
	double raizDelta = raiz(delta);
	 if (a == 0) {
		printf("o primeiro coeficiente nao pode ser zero\n");
	}
    else if (delta < 0) {
        printf("Nao existem raizes reais\n");   
    }
    else if (delta == 0) {
        double r = -b / (2 * a);
        printf("Existe uma raiz real: %.5lf\n", r);
    } 
	else if (a != 0 && delta>0){
        double r1 = (-b + raizDelta) / (2 * a);
        double r2 = (-b - raizDelta) / (2 * a);
        printf("As raizes reais sao: r1 = %.5lf e r2 = %.5lf\n", r1, r2);
    }
}