#include<stdlib.h>
#include<stdio.h>

int main (){
    int a,i;
    int total=0;

    for ( i = 0; i < 3; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d",&a);
        total=total+a;

    }printf("o valor da soma e:%d",total);
    

    return 0;
}