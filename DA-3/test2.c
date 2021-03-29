#include<stdio.h>
#include<stdlib.h>
int main(){
    char a[4];
    fgets(a,4,stdin);
    int start;
    start = 100*a[0]+10*a[1]+a[2];
    printf("%d\n",start);
    return 0;
}