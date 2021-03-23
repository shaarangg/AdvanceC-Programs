#include<stdio.h>
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int r=1,gcd;
    while(b%a){
        r=b%a;
        b=a;
        a=r;
    }
    printf("The gcd is %d",a);
}