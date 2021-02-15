#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0 && n%5==0 && n%7==0){
        printf("No. is divisible");
    }
    else{
        printf("No. is not divisible");
    }
}