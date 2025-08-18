#include <stdio.h>
int main()
{
double A = 0.0;
double X = 0.0;
double novoX = 0.0;
printf("informe o numero positivo");
scanf("%lf",&A);
for(int i=0; i<1000; i++)
{
novoX = 0.5*(X+A/X);
X = novoX;	
}	
printf("o valor de raiz quadrada de %.0lf e %.2lf/n",X novoX);
return(0);
}