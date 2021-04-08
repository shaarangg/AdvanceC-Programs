#include<stdio.h>  
int main()
{
    printf("Shaarang\n19BCT0215\n");
    float s[5];
    float a[5];
    for(int i=0; i<5; i++)
    {
        printf("Subject %d\n",i+1);
        printf("Marks : ");
        scanf("%f",&s[i]);
        printf("Average : ");
        scanf("%f",&a[i]);
        printf("\n");
    }
    printf("%12s%12s\n","Marks","Average");
    for(int i=0; i<5; i++)
    {
        printf("%s%d%9.1f%11.1f\n","S",i+1,s[i],a[i]);
    }
    return 0;
}