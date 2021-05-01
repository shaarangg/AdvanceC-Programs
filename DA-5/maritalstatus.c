#include<stdio.h>
#include<string.h>
int main()
{
    enum mat_status
    {
        Single, Married, Divorced, Widowed
    };
    typedef enum mat_status ms;
    typedef struct 
    {
        char name[20];
        int age;
        float salary;
        ms mstatus;
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
        printf("Enter maternal status -: Single(0), Married(1), Divorced(2) or Widowed(3)\n");
        fflush(stdin);
        scanf("%d",&e[i].mstatus);
    }
    printf("Employees who are single are -:\n");
    for(int i=0; i<n; i++)
    {
        if(e[i].mstatus==Single)
        {
            printf("%s\n",e[i].name);
        }
    }
}