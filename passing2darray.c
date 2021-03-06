#include<stdio.h>
void print(int *a, int r, int c);
int main(void){
    int r,c;
    printf("Enter the no. of rows and columns \n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the elements of the 2D array\n");
    for(int i=0; i<r;i++){
        for(int j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The elements in the 2D array are\n");
    print((int *)a, r, c);
    return 0;
}
void print(int *a, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", *(c*i + a + j));
        }
        printf("\n");
    }
}