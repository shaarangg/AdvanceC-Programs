#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no. of rows and columns\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements in the array\n");
    int a[r][c];
    int b[100];    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<100; i++)
    {
        b[i]=0;
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(b[a[i][j]]==0){
                b[a[i][j]]=1;
            }
            else{
                a[i][j]=0;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }    
    return 0;
}