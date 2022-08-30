#include<stdlib.h>
#include<stdio.h>

int main (){

int a,i;
int total=NULL;

for(i = 0;i < 3; i ++){
    printf("digite um numero\n");
    scanf("%d",&a);
    total=(total+(a*a));

}printf("total igual a %d",total);

}




