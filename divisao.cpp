#include <stdio.h>
int main()
{
	double A = 0.0;
	double B = 0.0;
	double resultado = 0.0;
	printf("digite um valor para somar\n");
	scanf("%lf",&A);
	printf("digite o proximo valor\n");
	scanf("%lf",&B);
	if (A>0)
	{
	resultado = A/B;
	printf("\033[1;31mresultado = %.1lf\n",resultado);
	}
	else if (A<=0)
	{
	printf("\033[1;31mnao e possivel dividir por zero");
	}
	printf("\033[0m");
	return(0);
}