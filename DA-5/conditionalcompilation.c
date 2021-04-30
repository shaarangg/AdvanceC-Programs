#include<stdio.h>
#define PI 3.14
#define FLAG 1
int main()
{
    #ifdef PI
    printf("19BCT0215\nShaarang\n");
    printf("Pre-Processor Directive ifdef working\n");
    #endif
    #ifndef IP
    printf("Pre-Processor Directive infdef working\n");
    #endif
    #if FLAG>0
    printf("Number is positive\n");
    #elif FLAG==0
    printf("Number is zero\n");
    #else
    printf("Number is neagtive\n");
    #endif
    #undef PI
    #ifdef PI
    printf("Wont't work because of undef\n");
    #endif
}