#include<stdio.h>
#include<stdlib.h>
int main(){
    struct serial{
        int sno;
        int yom;
        char material[10];
        int q;
    };
    struct serial a;
    printf("Enter the serial no. of the engine\n");
    scanf("%d",&a.sno);
    printf("Enter the year of manufacture of the engine\n");
    scanf("%d",&a.yom);
    printf("Enter the material of the engine\n");
    fgets(a.material,10,stdin);
    printf("Enter the quantity of the engine\n");
    scanf("%d",&a.q);
    
}