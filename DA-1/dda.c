#include<stdio.h>
void print(int *a, int m, int n){
    int i, j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d",*((a + i*n)+j));
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    print((int *)a,m,n);
    return 0;
}