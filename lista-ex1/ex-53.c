#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
 /*Ler um valor de área em hectares e apresentá-lo convertido em metros quadrados 𝑚². A 
fórmula de conversão é: 𝑀 = 𝐻 ∗ 10000 , sendo 𝑀 aárea em metros quadrados e 𝐻 a área em 
hectares.*/

int main() {
    float m2, hc;
    printf("Digite a area em hc: ");
    scanf("%f", &hc);
    m2 = hc * 10000;
    printf("\nA area em metros² eh: %.2f",m2);
    return 0;
}