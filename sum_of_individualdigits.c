#include<stdio.h>
int main(){
    printf("SHAARANG SINGH\n19BCT0215\n\n");
    int n; 
    printf("Enter the number\n");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        sum+= n%10;
        n/=10;
    }
    printf("Sum of digits is %d",sum);
    return 0;
}