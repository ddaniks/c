#include<stdio.h>
#include<stdlib.h>

void main()
{   int num,q=1;
    int *p;
    num=50;
    p=&num;
    q=*p;
    
    printf("\n%d",q);


    return 0;
}
