#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    long bin=0;
    int a=1;
    int b=0;
    while(n>0){
    while(n>0){
        b = n%2;
        bin=bin+a*b;
        n/=2;
        a*=10;
    }
    printf("%d",bin);
}