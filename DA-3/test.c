#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int a;
    int b;
    int *c;
}test;
int main(){
    test sample;
    sample.a=5;
    sample.b=10;
    sample.c = (int *)malloc(sizeof(int)*3);
    for(int i=0; i<3; i++){
        scanf("%d",&sample.c[i]);
    }
    printf("\n");
    for(int i=0; i<3; i++){
        printf("%d\n",*sample.c);
        sample.c++;
    }
    return 0;
}