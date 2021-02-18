#include<stdio.h>
int main(){
    printf("SHAARANG SINGH\n19BCT0215\n\n");
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    long bin=0;
    int a=1;
    int b=0;
    int s =n;
    while(n>0){
        b = n%2;
        bin=bin+a*b;
        n/=2;
        a*=10;
    }
    printf("The binary form of %d : %d",s,bin);
}