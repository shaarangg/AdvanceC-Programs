#include<stdio.h>
int main(){
    printf("SHAARANG SINGH\n19BCT0215\n\n");
    int n;
    printf("Enter the no.\n");
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        for(int j=0; j<=i;j++){
            printf("%c ",j+97);
        }
        printf("\n");
    }
    return 0;
}