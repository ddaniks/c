#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main (){
    float a,b,c;
    float p=3.141592;
    
        printf("Digite o raio do cilindro a\n");
        scanf("%f",&a);
        printf("Digite a altura do cilindo a\n");
        scanf("%f",&b);

        c=p*(a*a)*b;
        
        // printf("%.2f^2=%.2f\n",a,(a*a));

    printf("o volume do cilindro e:%.2f",c);
    
    return 0;
}