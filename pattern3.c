#include<stdio.h>
int main(){
    char c;
    int n;
    printf("Enter a character\n");
    scanf("%c",&c);
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=1; k<=(2*i)-1; k++){
                printf("%c",c);
        }
        printf("\n");
    }
}