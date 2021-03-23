#include<stdio.h>
#include<math.h>
int main(){
    printf("SHAARANG SINGH\n19BCT0215\n\n");
    int choice;
    printf("Enter \n1. Armstrong number\n2. Perfect number\n3. Perfect square\n");
    scanf("%d",&choice);
    int n;
    printf("Enter the number to check\n");
    scanf("%d",&n);
    int d=0;
    float e=0.0;
    int t=0,i=0;
    switch (choice)
    {
    case 1:
        t=n;
        while (n>0)
        {
            d+=(n%10)*(n%10)*(n%10);
            n/=10;
        }
        if(d==t){
            printf("Armstrong Number");
        }
        else{
            printf("Not Armstrong Number");
        }
        break;
    
    case 2:
        for(i=1;i<n;i++){
            if(n%i==0){
                d+=i;
            }
        }
        if(d==n){
            printf("Perfect number");
        }
        else{
            printf("Not perfect number");
        }
        break;
    
    case 3:
        e = sqrt((double)n);
        t=e;
        if(t==e){
            printf("Perfect square");
        }
        else{
            printf("Not perfect square");
        }
        break;
    default:
        break;
    }
}