#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a =5;
    int *p = (int *)malloc(sizeof(int));
    p=&a;
    printf("Address: %p   Value: %d\n",p,*p);
    return 0;
}