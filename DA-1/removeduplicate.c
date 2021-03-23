#include<stdio.h>
int main(){
    printf("SHAARANG SINGH\n19BCT0215\n\n");
    int r,c;
    printf("Enter the no. of rows and columns\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements in the array\n");
    int a[r][c];
    int max=0;    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    int b[max];
    for(int i=0; i<=max; i++)
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