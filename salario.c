#include <stdio.h>
 
int main() 
{
 
   char nome[30];
   double salario = 0.0;
   double vendas = 0.0;
   double total = 0.0;
   scanf("%s",&nome);
   scanf("%lf",&salario);
    scanf("%lf",&vendas);
    total = salario+(vendas*0.15);
    printf("vendedor %s TOTAL = R$ %.2lf\n",nome,total);
    return 0;
}