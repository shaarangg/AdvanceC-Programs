#include<stdio.h>
int main()
{
    enum dep
    {
        Assembly, Manufacturing, Accounts, Stores
    };
    typedef enum dep dep;
    typedef struct 
    {
        char name[20];
        int age;
        float salary;
        dep d;
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
        if(e[i].d==0)
            printf("Department - Assembly\n");
        else if(e[i].d==1)
            printf("Department - Manufacturing\n");
        else if(e[i].d==2)
            printf("Department - Accounts\n");
        else
            printf("Department - Stores\n");
    }
}