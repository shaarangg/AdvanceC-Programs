#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char name[20];
    char regno[20];
    float cgpa;
}stu;


int main()
{
    printf("Shaarang\n19BCT0215\n");
    FILE *fp,*ft;
    fp = fopen("student,dat","rb+");
    if(fp==NULL)
    {
        fp = fopen("student.dat","wb+");
        if(fp==NULL)
        {
            printf("Error opening the file\n");
            exit(0);
        }
    }
    stu s;
    int choice;
    float m=0.0;
    int ssize=sizeof(s);
    char rno[20];
    do{
        printf("Enter a choice:\n1. Add new student\n2. Display all students\n3. Delete a student\n4. Modify a student's record\n5. Display the name of the student who has highest CGPA\n6. Display the name of the student given his registration number\n7. Exit\n");
        fflush(stdin);
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            fseek(fp,0,SEEK_END);
            printf("Enter student's name, regno and CGPA\n");
            scanf("%s %s %f",s.name,s.regno,&s.cgpa);
            fwrite(&s,ssize,1,fp);
            break;
        
        case 2:
            rewind(fp);
            printf("Student's details are : \n");
            while(fread(&s,ssize,1,fp)==1)
                printf("Name: %s\nReg No.: %s\nCGPA: %0.2f\n\n",s.name,s.regno,s.cgpa);
            break;


        case 3:
            rewind(fp);
            printf("Enter the regno. of the student you want to delete\n");
            scanf("%s",rno);
            ft = fopen("temp.dat","wb");
            while(fread(&s,ssize,1,fp)==1)
            {
                if(strcmp(s.regno,rno)!=0)
                {
                    fwrite(&s,ssize,1,ft);
                }
            }
            fclose(fp);
            fclose(ft);
            remove("student.dat");
            rename("temp.dat","student.data");
            fp=fopen("student.dat","rb+");
            break;

        case 4:
            rewind(fp);
            printf("Enter the regno. of the student you want to modify\n");
            scanf("%s",rno);
            while(fread(&s,ssize,1,fp)==1)
            {
                if(strcmp(s.regno,rno)==0)
                {
                    fseek(fp,-ssize,SEEK_CUR);
                    printf("Enter the name, regno and CGPA\n");
                    scanf("%s %s %f",s.name,s.regno,&s.cgpa);
                    fwrite(&s,ssize,1,fp);
                    printf("Record successfully modified\n");
                    break;
                }
            }
            break;

        case 5:
            rewind(fp);
            while(fread(&s,ssize,1,fp)==1)
            {
                if(s.cgpa>m)
                {
                    m=s.cgpa;
                    strcpy(rno,s.name);
                }
            }
            printf("Student with the highest CGPA is:\n");
            printf("Name: %s\n",rno);
            break;

        case 6:
            rewind(fp);
            printf("Enter the regno\n");
            scanf("%s",rno);
            while(fread(&s,ssize,1,fp)==1)
            {
                if(strcmp(s.regno,rno)==0)
                {
                    printf("Name: %s\n",s.name);
                    break;
                }
            }
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