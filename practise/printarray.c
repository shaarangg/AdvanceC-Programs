#include<stdio.h>
void printarray(int *a, int i);
int main(){
    int n[] = {1,2,3,4,5};
    printarray(n,5);
    return 0;
}
void printarray(int *a, int i){
    if(i<=0){
        return;
    }
    i--;
    printarray(a,i);
    printf("%d",a[i]);
}