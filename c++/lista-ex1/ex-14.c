#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, desconto, valorfinal;
    printf("Digite o preco do produto:\n");
    scanf("%f" , &valor);
    desconto =  valor * 0.12;
    valorfinal = valor - desconto;
    printf("O valor com desconto e: %.2f" ,valorfinal);

    return 0;
}