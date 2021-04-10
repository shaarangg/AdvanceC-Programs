#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

typedef struct
{
    int day;
    int month;
    int year;
}date;

date todate(char* doj);
int validate_date(date d);
int validate_phone(char *ph);

typedef struct
{
    int empid;
    char name[15];
    date doj;
    char phone[11];
}db;

void read(db emp[], int n);

date todate(char* doj)
{
    date d;
    char dp[3][5];
    int i=0;
    int j=0;
    int c=0;
    while(1)
    {
        if(doj[c]=='\n')
        {
            break;
        }
        if(doj[c]=='/')
        {
            dp[i][j]='\0';
            c+=1;
            i+=1;
            j=0;
            continue;
        }
        dp[i][j]=doj[c];
        c+=1;
        j+=1;
    }
    d.day = atoi(dp[0]);
    d.month = atoi(dp[1]);
    d.year = atoi(dp[2]);
    return d;    
}

int validate_date(date d)
{
    int mon_days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(d.month>12)
        return 0;
    if(d.month==2)
    {
        if((d.year%4==0 && d.year%100!=0) || d.year%400==0)
        {
            mon_days[1]=29;
        }
    }
    if(d.day>mon_days[d.month - 1])
        return 0;
    else
        return 1;
}

int validate_phone(char *ph)
{
    if(strlen(ph)!=10)
        return 0;
    for(int i=0; i<10; i++)
    {
        if(!isdigit(ph[i]))
            return 0;
    }
    return 1;
}

void read(db emp[], int n)
{
    char jd[20];
    for(int i=0; i<n; i++)
    {
        printf("Enter employee ID:\n");
        scanf("%d",&emp[i].empid);
        printf("Enter name:\n");
        fflush(stdin);
        fgets(emp[i].name,15,stdin);
        printf("Enter date of joining:\n");
        fgets(jd,20,stdin);
        emp[i].doj=todate(jd);
        if(!validate_date(emp[i].doj))
        {
            printf("Invalid date: Enter details of this employee again\n");
            i--;
            continue;
        }
        printf("Enter mobile number:\n");
        fgets(emp[i].phone,11,stdin);
        fflush(stdin);
        if(!validate_phone(emp[i].phone))
        {
            printf("Invalid phone number: Enter details of this employee again\n");
            i--;
        }
    }
}

int main()
{
    int n;
    printf("Enter the no. of employess\n");
    scanf("%d",&n);
    db emp[n];
    read(emp,n);
    printf("\nEmployees who are eligible to recieve the gift are :\n");
    for(int i=0; i<n; i++)
    {
        if(emp[i].doj.year<2010  && emp[i].empid%5==0)
        {
            printf("Name : %s",emp[i].name);
            printf("Mobile : %s\n\n",emp[i].phone);
        }
    }
    return 0;
}