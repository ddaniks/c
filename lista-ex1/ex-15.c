#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, almento, salnov;
    printf("Digite o salario:\n");
    scanf("%f" , &salario);
    almento =  salario * 0.25;
    salnov = salario + almento;
    printf("O valor so novo salario eh:R$=%.2f" ,salnov);

    return 0;
}