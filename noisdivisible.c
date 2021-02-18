#include <stdio.h>
int main()
{
    printf("SHAARANG SINGH\n19BCT0215\n\n");
    int n;
    scanf("%d",&n);
    if(n%2==0 && n%5==0 && n%7==0){
        printf("No. is divisible");
    }
    else{
        printf("No. is not divisible");
    }
}