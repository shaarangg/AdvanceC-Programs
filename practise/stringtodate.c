#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int day;
    int month;
    int year;
}date;

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

int main()
{
    char doj[15];
    fgets(doj,15,stdin);
    date d = todate(doj);
    printf("Day : %d\n",d.day);
    printf("Month : %d\n",d.month);
    printf("Year : %d\n",d.year);
    return 0;
}