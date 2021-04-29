#include<stdio.h>
void p(void (*)(int,int),int,int);
void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);
int main()
{
    printf("Shaarang\n19BCT0215\n");
    int a,b,n;
    printf("Enter 2 no.s\n");
    scanf("%d%d",&a,&b);
    printf("Enter\n1: Add\n2: Subtract\n3: Multiply\n4: Divide\n");
    scanf("%d",&n);
    if(n==1)
    {
        p(add,a,b);
    }
    if(n==2)
    {
        p(sub,a,b);
    }
    if(n==3)
    {
        p(mul,a,b);
    }
    else if(n==4)
    {
        p(div,a,b);
    }
    else{
        printf("Invalid Option");
    }
    return 0;
}
void p(void (*opr)(int,int), int a, int b)
{
    opr(a,b);
}
void add(int a, int b)
{
    printf("%d",a+b);
}
void sub(int a, int b)
{
    printf("%d",a-b);
}
void mul(int a, int b)
{
    printf("%d",a*b);
}
void div(int a, int b)
{
    printf("%0.2f",(float)a/b);
}