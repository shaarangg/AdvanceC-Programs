#include<stdio.h>
int main()
{
    printf("Shaarang\n19BCT0215\n");
    char a[] = "Hello";
    char b[] = "World!";
    printf("%10s%10s\n",a,b); 
    printf("%5.2s%5.3s",a,b); 
    // .n gives first n characters of the string
    return 0;
}