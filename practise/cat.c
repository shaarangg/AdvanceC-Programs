#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int mono[n];
    int temp[n];
    int k=0,max=0;
    for(int i=n-1; i>0; i--){
        k=0;
        temp[k]=a[i];
        for(int j= i-1; j>0; j--){
            if(temp[k]>a[j])
            {
                k++;
                temp[k]=a[j];
            }
        }
        if(k+1 > max){
            max=k+1;
            for(int x=0; x<max; x++){
                mono[x] = temp[x];
            }
        }
    }
    printf("The longest monotone sequence is \n");
    for(int i=0; i<max; i++){
        printf("%d ",mono[i]);
    }
    return 0;
}