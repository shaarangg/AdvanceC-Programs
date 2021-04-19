#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char name[20];
    char accno[20];
    float bal;
}acc;


int main()
{
    printf("Shaarang\n19BCT0215\n");
    FILE *fp,*ft;
    fp = fopen("account.dat","rb+");
    if(fp==NULL)
    {
        fp = fopen("account.dat","wb+");
        if(fp==NULL)
        {
            printf("Error opening the file\n");
            exit(0);
        }
    }
    acc s;
    int choice,f;
    int asize=sizeof(s);
    float amt;
    char ano[20];
    do{
        printf("Enter a choice:\n1. Add new account\n2. Display all customers\n3. Delete a customer\n4. Modify a customer's record\n5. Display the name of the customer given the account number\n6. Withdrawal transaction\n7. Exit\n");
        fflush(stdin);
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            fseek(fp,0,SEEK_END);
            printf("Enter customer's name, accno and available balance\n");
            scanf("%s %s %f",s.name,s.accno,&s.bal);
            fwrite(&s,asize,1,fp);
            break;
        
        case 2:
            rewind(fp);
            printf("Customer's details are :\n");
            while(fread(&s,asize,1,fp)==1)
                printf("Name: %s\nAcc No.: %s\nAvailable Balance: %0.2f\n\n",s.name,s.accno,s.bal);
            break;

        case 3:
            rewind(fp);
            printf("Enter the accno. of the customer you want to delete\n");
            scanf("%s",ano);
            ft = fopen("temp.dat","wb");
            while(fread(&s,asize,1,fp)==1)
            {
                if(strcmp(s.accno,ano)!=0)
                {
                    fwrite(&s,asize,1,ft);
                }
            }
            fclose(fp);
            fclose(ft);
            remove("account.dat");
            rename("temp.dat","account.data");
            fp=fopen("account.dat","rb+");
            break;

        case 4:
            rewind(fp);
            printf("Enter the accno. of the customer you want to modify\n");
            scanf("%s",ano);
            while(fread(&s,asize,1,fp)==1)
            {
                if(strcmp(s.accno,ano)==0)
                {
                    fseek(fp,-asize,SEEK_CUR);
                    printf("Enter the name, accno and available balance\n");
                    scanf("%s %s %f",s.name,s.accno,&s.bal);
                    fwrite(&s,asize,1,fp);
                    printf("Record successfully modified\n");
                    break;
                }
            }
            break;

        case 5:
            rewind(fp);
            printf("Enter the account number\n");
            scanf("%s",ano);
            while(fread(&s,asize,1,fp)==1)
            {
                if(strcmp(s.accno,ano)==0)
                {
                    printf("Name: %s\n",s.name);
                    break;
                }
            }
            break;

        case 6:
            rewind(fp);
            printf("Enter the account no.\n");
            scanf("%s",ano);
            while(fread(&s,asize,1,fp)==1)
            {
                if(strcmp(s.accno,ano)==0)
                {
                    printf("Enter the amount\n");
                    scanf("%f",&amt);
                    if(s.bal-amt>=1000)
                    {
                        s.bal-=amt;
                        fseek(fp,-asize,SEEK_CUR);
                        fwrite(&s,asize,1,fp);
                        printf("Transaction Successfull\n");
                        f=1;
                        break;
                    }
                    else
                    {
                        printf("Insufficent Balance\n");
                        f=1;
                        break;
                    }
                        
                }
            }
            if(f==0)
                printf("Incorrect Account number\nPlease try again\n");
            break;

        case 7:
            break;

        default:
            printf("Invalid choice try again\n");
            break;
        }
    }while(choice!=7);
    return 0;
}