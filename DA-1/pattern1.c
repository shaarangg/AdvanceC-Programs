#include<stdio.h>
int main(){
    printf("SHAARANG SINGH\n19BCT0215\n\n");
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=i; j>0; j--){
            printf("%d  ",j);
        }
        printf("\n");
    }
}