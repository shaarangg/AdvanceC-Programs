#include<stdio.h>
int fibonacii(int n);
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a; i++){
        printf("%d ",fibonacii(i));
    }
    return 0;
}
int fibonacii(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacii(n-2)+fibonacii(n-1);
}