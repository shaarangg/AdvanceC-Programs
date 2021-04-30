#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <stdlib.h>
#define arithmeticmean(x,y) (x+y)/2;
#define absvalue(x) abs(x);
#define tolowercase(ch) tolower(ch);
#define bigger(x,y) (x > y) ? x:y; 
int main()
{
    printf("Shaarang\n19BCT0215\n");
    float x,y;
    printf("Enter the 2 no.s\n");
    scanf("%f %f",&x,&y);
    float mean = arithmeticmean(x,y);
    printf("Arithmetic mean of the 2 no.s is %0.2f\n",mean);
    float big = bigger(x,y)
    printf("Bigger Number out of the 2 numbers is %0.1f\n",big);
    char ch;
    printf("Enter character input \n");
    fflush(stdin);
    scanf("%c",&ch);
    ch = tolowercase(ch);
    printf("Character converted to lowercase %c\n",ch);
    int a;
    printf("Enter the number who's abs value you want to take out\n");
    int b;
    scanf("%d",&b);
    b = absvalue(b)
    printf("The absoulte value is %d\n",b);                     
}