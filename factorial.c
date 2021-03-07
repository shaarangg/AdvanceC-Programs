#include<stdio.h>
int factorial(int n);
int main(){
    int a;
    scanf("%d",&a);
    int s=factorial(a);
    printf("%d",s);
    return 0;
}
int factorial(int n){
    if(n==1){
        return;
    }
    else{
        return n*factorial(n-1);
    }
}