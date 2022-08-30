#include<stdlib.h>
#include<stdio.h>

int main (){
    float a,p=3.141592;
    float area=0;
        printf("Digite o raio do circulo:\n");
        scanf("%f",&a);
        area=p*(a*a);

    printf("o valor da area e:%.2f",area);
    

    return 0;
}