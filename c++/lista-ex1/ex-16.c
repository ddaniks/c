#include<stdlib.h>
#include<stdio.h>


int main() {
    float valor = 780.000;
    printf("O valor do premio eh:R$%.3f\n", valor );
    float g1, g2, g3;
    g1=  valor * 0.46;
    printf("Primeiro ganhador recebe:R$%.3f\n", g1);
    g2=  valor * 0.32;
    printf("Segundo ganhador recebe:R$%.3f\n", g2);
    g3=  valor * 0.22;
    printf("Terceiro ganhador recebe:R$%.3f\n", g3);
    
    return 0;
}