#include<stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=4; i>0; i--){
        for(int j=i; j>0; j--){
            printf("%d  ",j);
        }
        printf("\n");
    }
}