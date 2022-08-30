#include<stdlib.h>
#include<stdio.h>

int main (){

    int a,b,c;

    printf ("digite um numero\n");
    scanf("%d",&a);
    b=(a*3)+1;
    c=(a*2)-1;

    printf("a soma do triplo de %d + 1 = %d \ncom o dobro de %d - 1 = %d \n",a,b,a,c);
    printf("%d+%d=%d",b,c,(b+c));




}