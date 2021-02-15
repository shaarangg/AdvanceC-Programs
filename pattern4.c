#include<stdio.h>
int main(){
    int n;
    printf("Enter the no.\n");
    scanf("%d",&n);
    for(int i=97; i<(97+n);i++){
        for(int j=97; j<=i;j++){
            printf("%c",i);
        }
        printf("\n");
    }
}