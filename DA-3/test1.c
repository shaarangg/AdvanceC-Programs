#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    a = (int *)malloc(sizeof(int)*3);
    for(int i=0; i<3; i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0; i<3; i++){
        printf("%d\n",*a);
        a++;
    }    
}