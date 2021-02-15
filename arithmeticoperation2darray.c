#include<stdio.h>
int main(){
    printf("Enter the dimension NxN for matrix\n");
    int n;
    scanf("%d",&n);
    printf("Enter the elements of the matrix 1\n");
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[n][n];
    printf("Enter the elements of the matrix 2\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&b[i][j]);
        }
    }
    char choice;
    printf("Enter\n+ :-Addition\n- :-Subtraction\nx -:Multiplication\n");

    scanf(" %c",&choice);

    int c[n][n];
    switch(choice){
        case '+':
            printf("The resulting array after %c operations is :\n",choice);
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    c[i][j]=a[i][j]+b[i][j];
                    printf("%d  ",c[i][j]);
                }
                printf("\n");
            }
            break;
        
        case '-':
            printf("The resulting array after %c operations is :\n",choice);
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    c[i][j]=a[i][j]-b[i][j];
                    printf("%d  ",c[i][j]);
                }
                printf("\n");
            }
            break;
        case 'x':
            printf("The resulting array after %c operations is :\n",choice);
            for(int i =0; i<n;i++){
                for(int j=0; j<n; j++){
                    c[i][j]=0;
                    for(int k=0; k<n; k++){
                        c[i][j]+=a[i][k]*b[k][j];
                    }
                    printf("%d  ",c[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Wrong Input\n");
            break;
    }            
    return 0;         
}