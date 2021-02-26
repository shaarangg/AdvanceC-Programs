#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    printf("Shaarang Singh\n19BCT0215\n");
    char a[100];
    fgets(a,100,stdin);
    int n = strlen(a);
    int sum=0;
    int i=0;
    int j=0;
    while(j<n-1){
        i=0;
        while(a[i]==a[i+j] && i<n-1){
            i++;
            sum+=1;
        }
        j++;
    }
    printf("%d",sum);
    return 0;
}