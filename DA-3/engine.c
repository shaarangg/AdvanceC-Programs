#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("Shaarang\n19BCT0215\n");
    struct serial{
        char sno[4];
        int yom;
        char material[10];
        int q;
    };
    struct serial a[5];
    for(int i=0; i<5; i++){
        printf("Enter the serial no. of the engine\n");
        fgets(a[i].sno,4,stdin);
        printf("Enter the year of manufacture of the engine\n");
        scanf("%d",&a[i].yom);
        fflush (stdin);
        printf("Enter the material of the engine\n");
        fgets(a[i].material,10,stdin);
        printf("Enter the quantity of the engine\n");
        scanf("%d",&a[i].q);
        fflush (stdin); //This is done so that the \n character that is left by the scanner get flushed
        printf("\n");
    }
    printf("Parts with serial numbers between BB1 and CC6 are :\n");
    int start = 100*('B') + 10*('B') + '1';
    int end = 100*'C' + 10*'C' + '6';
    int ascii;
    for(int i=0; i<5; i++)
    {
        ascii = 100*a[i].sno[0] + 10*a[i].sno[1] + a[i].sno[2];
        if(ascii>start && ascii<end)
        {
            printf("Serial no. : %s\n",a[i].sno);
            printf("Year of manufacture : %d\n",a[i].yom);
            printf("Material : %s\n",a[i].material);
            printf("Quantity : %d\n",a[i].q);
            printf("\n");
        }
    }
    return 0;
}