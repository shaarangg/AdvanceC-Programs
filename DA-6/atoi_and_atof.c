#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Shaarang\n19BCT0215\n\n");
    char a[20];
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Double value of string: %0.3lf\n",atof(a));
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Integer value of %s: %d",a,atoi(a));
    return 0;
}