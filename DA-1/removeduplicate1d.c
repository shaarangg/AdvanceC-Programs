#include<stdio.h>
int main(){
    printf("SHAARANG SINGH\n19BCT0215\n\n");
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    int a[n];
    int max=0;
    printf("Enter the elements of the array\n");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
    }
    int b[max];
    for(int i=0; i<=max; i++){
        b[i]=0;
    }
    for(int i=0; i<n; i++){
        if(b[a[i]]==0){
            b[a[i]] = 1;
        }
        else{
            a[i]=0;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}