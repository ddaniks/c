#include<stdlib.h>
#include<stdio.h>

int main(){

    int i; float a=0,b=0,media;

    for(i=0;i<3;i++){
        printf("digite um nota\n");
        scanf("%f",&a);
        b=(b+a);
        
    }   
        media=(b/3);
        printf("media e igual a %.2f",media);




    return 0;
}