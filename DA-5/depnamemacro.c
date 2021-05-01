#include<stdio.h>
#define Assembly 0
#define Manufacturing 1
#define Accounts 2
#define Stores 3
int main()
{
    typedef struct 
    {
        char name[20];
        int age;
        float salary;
        int d;
    }emp;
    int n;
    printf("19BCT0215\nShaarang\n");
    printf("Enter no. of employees\n");
    scanf("%d",&n);
    emp e[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter name\n");
        scanf("%s",e[i].name);
        printf("Enter age\n");
        scanf("%d",&e[i].age);
        printf("Enter salary\n");
        scanf("%0.2f",&e[i].salary);
        printf("Enter  -: Assembly(0), Manufacturing(1), Accounts(2) or Stores(3)\n");
        fflush(stdin);
        scanf("%d",&e[i].d);
    }
    printf("Employees names and the departments thet are working in are -:\n");
    for(int i=0; i<n; i++)
    {
        printf("Name - %s\n",e[i].name);
        if(e[i].d==Assembly)
            printf("Department - Assembly\n");
        else if(e[i].d==Manufacturing)
            printf("Department - Manufacturing\n");
        else if(e[i].d==2)
            printf("Department - Accounts\n");
        else
            printf("Department - Stores\n");
    }
}