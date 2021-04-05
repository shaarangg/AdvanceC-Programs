#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int accno;
    char name[15];
    int bal;
}acc;

void trans(acc a[], int no);
void search(acc a[], int acno, int c[], int no);

int main()
{
    printf("Shaarang\n19BCT0215\n");
    acc a[5];
    int no;
    printf("Enter the no. of customers\n");
    scanf("%d",&no);
    for(int i=0; i<no; i++)
    {
        printf("Enter account no.:\n");
        scanf("%d",&a[i].accno);
        fflush(stdin);
        printf("Enter name:\n");
        fgets(a[i].name,15,stdin);
        printf("Enter balance:\n");
        scanf("%d",&a[i].bal);
    }
    printf("\nAcc below Rs. 100\n");
    for(int i=0; i<no; i++)
    {
        if(a[i].bal<100)
        {
            printf("Acc No. : %d\n",a[i].accno);
            printf("Name : %s\n",a[i].name);
        }
    }
    trans(a, no);
    return 0;
}


void search(acc a[],int acno, int c[], int no)
{
    for(int i=0; i<no; i++)
    {
        if(a[i].accno==acno)
        {
            c[0]=1;
            c[1]=i;
            break;           
        }
        else
        {
            c[0]=0;
        }
    }
}


void trans(acc a[], int no)
{
    int n;
    char name[15];
    int acno;
    int b;
    int c[2];
    do
    {
        printf("Enter\n0: Withdrawl\n1: Deposit\n2: Exit\n");
        scanf("%d",&n);
        switch (n)
        {

        case 0:
            printf("Enter account no.:\n");
            scanf("%d",&acno);
            fflush(stdin);
            printf("Enter name:\n");
            fgets(name,15,stdin);
            search(a,acno,c, no);
            if(c[0]==1)
            {
                printf("Enter the ammount to withdraw\n");
                scanf("%d",&b);
                if(a[c[1]].bal-b<100)
                {
                    printf("Insufficient Funds\n");
                }
                else{
                    a[c[1]].bal-=b;
                }
            }
            else
            {
                printf("Account does not exist\n");
            }
            break;

        case 1:
            printf("Enter account no.:\n");
            scanf("%d",&acno);
            fflush(stdin);
            printf("Enter name:\n");
            fgets(name,15,stdin);
            search(a,acno,c, no);
            if(c[0]==1)
            {
                printf("Enter the ammount to deposit\n");
                scanf("%d",&b);
                a[c[1]].bal+=b;
            }
            else
            {
                printf("Account does not exist\n");
            }
            break;
    
        default:
            if(n>3 || n<0)
            {
                printf("Invalid Option\n");
            }
            break;
        }

    }while(n!=2);
}