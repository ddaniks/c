#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main (){
    float a,b,c;
    
        printf("Digite o cateto a\n");
        scanf("%f",&a);
        printf("Digite o cateto b\n");
        scanf("%f",&b);

        c=sqrt( (a * a) + (b * b) );

    printf("a hipotenusa do triangulo e:%.2f",c);
    
    return 0;
}