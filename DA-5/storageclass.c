#include<stdio.h>
int i=5; //Definining a variable of extern class
void demostatic();
int main()
{
    printf("19BCT0215\nShaarang\n");
    int a=1; // Variable of auto class
    register int b = 5; //Variable of class register which may get stored in the register of the CPU depending on the availability
    printf("Variabe of auto class :- %d\n",a);
    printf("Variabe of register class :- %d\n",b);
    {
        {
            printf("Variabe of extern class :- %d\n",i);
        }
    }
    printf("Variable of static class\n");
    demostatic();
    demostatic();
    demostatic();
}
void demostatic()
{
    static int c = 4; // Variable of class static
    c+=1;
    printf("%d ",c);
}