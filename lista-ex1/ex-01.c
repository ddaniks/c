#include<stdio.h>
#include<stdlib.h>

int main(){
    int a; float b;
    printf("Digite um numero inteiro:\n");
    scanf("%d",&a);
    printf("Digite um numero float:\n");
    scanf("%f",&b);

    printf("o numero int e: %d\n",a);
    printf("o numero float e:%.2f\n",b);

    return 0;
}