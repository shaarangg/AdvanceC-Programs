#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    int empid;
    char name[15];
    char date[10];
    int phone;
}db;
int main()
{
    int n;
    printf("Enter the no. of employess\n");
    scanf("%d",&n);
    db emp[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter employee ID:\n");
        scanf("%d",&emp[i].empid);
        printf("Enter name:\n");
        fflush(stdin);
        fgets(emp[i].name,15,stdin);
        printf("Enter date:\n");
        fgets(emp[i].date,10,stdin);
        fflush(stdin);
        printf("Enter mobile number:\n");
        scanf("%d",&emp[i].phone);
    }
    long d = 1+30+2010*365;
    printf("\nEmployees who are eligible to recieve the gift are :\n");
    for(int i=0; i<n; i++)
    {   
        long dt = emp[i].date[0]-'0'+emp[i].date[1]-'0';
        long m = (emp[i].date[3]-'0')*10+(emp[i].date[4]-'0')*30;
        long y = ((emp[i].date[6]-'0')*1000+(emp[i].date[7]-'0')*100+(emp[i].date[8]-'0')*10+(emp[i].date[9])-'0')*365;
        //Assuming that a year has 365 days and a month has 30 days
        if(dt+m+y<d  && emp[i].empid%5==0)
        {
            printf("Name : %s",emp[i].name);
            printf("Mobile : %d\n\n",emp[i].phone);
        }
    }
    return 0;
}