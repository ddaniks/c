#include<stdlib.h>
#include<stdio.h>

int a,b,c;
int *d=NULL,*e=NULL,*f=NULL;

int main()
{

printf("Digite valor da primeira variavel\n");
scanf("%d",&a);
printf("Digite valor da segunda variavel\n");
scanf("%d",&b);
printf("Digite o valor da terceira variavel\n");
scanf("%d",&c);

printf( "\nvalores inciais dos ponteiros");
printf( "\nvariavel a = %d ",d);
printf( "\nvariavel b = %d ",e);
printf( "\nvariavel c = %d \n\n",f);


d=&a+100;
e=&b+100;
f=(&c+100);

printf( "\nvariavel a = %d ",d);
printf( "\nvariavel b = %d ",e);
printf( "\nvariavel c = %d ",f);





return 0;
}
