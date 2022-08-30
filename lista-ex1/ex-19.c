#include <stdio.h>
#include <stdlib.h>
/* Receba o salário-base de um funcionário, calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, paga % de
imposto sobre o salário-base
 */
int main() {
    float salb;
    printf("Insira seu salario: R$");
    scanf("%f", salb);
    float gratificacao, imposto, saltotal;
    gratificacao = salb * 0.05;
    imposto = salb * 0.07;
    saltotal = salb + gratificacao - imposto;
    printf("\nSalario a receber eh: R$%.2f", saltotal);
    
    return 0;
}