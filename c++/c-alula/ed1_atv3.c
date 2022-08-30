#include<stdio.h>
#include<stdlib.h>

void main(){
    
    float a[10]={0,1,2,3,4,5,6,7,8,9,};
    int i;  int *pont;

    *pont=a;
    for (i=0;i<10;i++){
            printf("%d\n",pont[i]);
    };







    return 0;
}