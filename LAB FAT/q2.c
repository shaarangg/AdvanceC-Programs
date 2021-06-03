#include<stdio.h>
typedef struct{
    char name[20];
    char regno[20];
    char school[20];
    char pos[20];
    char type_scholar[20];
    float cgpa;
    float ngo;
    int no_of_sem;
    int score;
}student;
int main()
{
    printf("Shaarang\n19BCT0215\n\n");
    int n;
    printf("Enter no. of students: ");
    scanf("%d",&n);
    fflush(stdin);
    student s[n];
    student temp;


    // Taking input
    for(int i=0; i<n; i++)
    {
        printf("Enter details of student:\n");
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("RegNo: ");
        scanf("%s",s[i].regno);
        printf("School: ");
        scanf("%s",s[i].school);
        printf("Position at club/chapter: ");
        scanf("%s",s[i].pos);
        printf("Hostel/Day Scholar: ");
        scanf("%s",s[i].type_scholar);
        fflush(stdin);
        printf("CGPA: ",s[i].cgpa);
        scanf("%f",&s[i].cgpa);
        fflush(stdin);
        printf("No. of hours served in NGO: ",s[i].cgpa);
        scanf("%f",&s[i].ngo);
        fflush(stdin);
        printf("No. of sem student has hundred percent attendance: ");
        scanf("%d",&s[i].no_of_sem);
        s[i].score=0;
    }

    //  Sorting the array in descending order according to the CGPA
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-i; j++)
        {
            if(s[j+1].cgpa>s[j].cgpa)
            {
                temp = s[j+1];
                s[j+1] = s[j];
                s[j] = temp;
            }
        }
    }


    // Calculating score for CGPA
    for(int i=0; i<n; i++)
    {
        s[i].score+=10-i;
    }


    // Sorting the array in descending order according to the no. of hours served in NGO
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-i; j++)
        {
            if(s[j+1].ngo>s[j].ngo)
            {
                temp = s[j+1];
                s[j+1] = s[j];
                s[j] = temp;
            }
        }
    }
    // Calculating score for serving in NGO
    for(int i=0; i<n; i++)
    {
        s[i].score+=10-i;
    }
    
    // Calculating the score for Position in club/chapter and giving bonus if student has 100% attendance
    for(int i=0; i<n; i++)
    {
        if(strcmp(s[i].pos,"President")==0)
        {
            s[i].score+=10;
        }
        if(strcmp(s[i].pos,"Secretary")==0)
        {
            s[i].score+=7;
        }
        if(strcmp(s[i].pos,"Member")==0)
        {
            s[i].score+=5;
        }

        if(s[i].no_of_sem==7)
        {
            s[i].score+=5;
        }
    }
    // Taking out the best outgoing student
    int m=0;
    for(int i=0; i<n; i++)
    {
        if(s[i].score>m)
        {
            m=s[i].score;
            temp = s[i];
        }
    }
    printf("Best Outgoing student for 2021\n");
    printf("%s\n",temp.name);
    printf("%s\n",temp.regno);
}