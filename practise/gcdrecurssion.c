#include<stdio.h>
int gcd(int a, int b);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}
int gcd(int a,int b)
{
    if(b%a==0){
        return a;
    }
    gcd(b%a,a);
}