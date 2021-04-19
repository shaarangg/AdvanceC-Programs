#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char name[20];
    int age;
    int s;
}emp;

int main()
{
    printf("Shaarang\n19BCT0215\n");
    FILE *fp, *ft;
    fp = fopen("employee.dat","rb+");
    if(fp==NULL)
    {
        fp = fopen("employee.dat","wb+");
        if(fp==NULL)
        {
            printf("Error openeing the file\n");
            exit(0);
        }
    }
    emp e;
    int rsize = sizeof(e);
    int choice;
    char empname[20];
    do{
        printf("Enter a choice\n1. Add record\n2. Display record\n3. Modify record\n4. Delete record\n5. Exit\n");
        fflush(stdin);
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            fseek(fp,0,SEEK_END);
            printf("Enter name, age and salary\n");
            scanf("%s %d %d",e.name,&e.age,&e.s);
            fwrite(&e,rsize,1,fp);
            break;

        case 2:
            rewind(fp);
            while(fread(&e,rsize,1,fp)==1)
            {
                printf("Name: %s\nAge: %d\nSalary: %d\n\n",e.name,e.age,e.s);
            }
            break;
        
        case 3:
            rewind(fp);
            printf("Enter name of the employee to modify\n");
            scanf("%s",empname);
            while(fread(&e,rsize,1,fp)==1)
            {
                if(strcmp(e.name,empname)==0)
                {
                    printf("Enter new name, age and salary\n");
                    scanf("%s %d %d",e.name,&e.age,&e.s);
                    fseek(fp,-rsize,SEEK_CUR);
                    fwrite(&e,rsize,1,fp);
                    break;
                }
            }
            break;
        
        case 4:
            rewind(fp);
            printf("Enter name of employee to delete\n");
            scanf("%s",empname);
            ft = fopen("temp.dat","wb");
            while(fread(&e,rsize,1,fp)==1)
            {
                if(strcmp(e.name,empname)!=0)
                {
                    fwrite(&e,rsize,1,ft);
                }
            }
            fclose(fp);
            fclose(ft);
            remove("employee.dat");
            rename("temp.dat","employee.dat");
            fp = fopen("employee.dat","rb+");
            if(fp!=NULL)
                printf("Record Successfully deleted\n");
            break;

        case 5:
            break;

        default:
            printf("Incorrect Choice\n");
            break;
        }
    }while(choice!=5);
}