#include<stdio.h>
void sum(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);
int main()
{
    printf("Shaarang\n19BCT0215\n");
    int a,b,n;
    void (*ptr[4])(int,int);
    printf("Enter 2 no.s\n");
    scanf("%d%d",&a,&b);
    printf("Enter\n1: Add\n2: Subtract\n3: Multiply\n4: Divide\n");
    scanf("%d",&n);
    ptr[0]=sum;
    ptr[1]=sub;
    ptr[2]=mul;
    ptr[3]=div;
    ptr[n-1](a,b);
}
void sum(int a, int b)
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