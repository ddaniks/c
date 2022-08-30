#include<stdlib.h>
#include<stdio.h>

int a,b;

void funcao();

int main(){
    

    printf("Digite um numero\n");
    scanf("%d",&a);
    funcao();
    return 0;    
    }

void funcao(){
    
    b=a*a;
    printf("o numero elevado ao quadrado e :%d",b);
    
}