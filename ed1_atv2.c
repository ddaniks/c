#include<stdlib.h>    
#include<stdio.h>


void main()
{
    int a,b;
    int *x,*y;

    printf("Digite a primeira variavel\n");
    scanf("%d",&a);
    printf("Digite a segunda variavel\n");
    scanf("%d",&b);

    x=&a;
    y=&b;

    printf("\no end de %d = %d",a,&x);
    printf("\no end de %d = %d",b,&y);    

    if (&x>&y)
    {
        printf("\nvariavel %d e maior que %d",a,b);
        
    }else{printf("\nvariavel %d e maior que %d",b,a);}
    



    return 0;
}
