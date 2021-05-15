#include<stdio.h>
#include"struct.h"
int main()
{
    s s1;
    printf("Enter name of the student\n");
    scanf("%[^\n]%*c",s1.name);
    printf("Enter reg no. of the student\n");
    scanf("%s",s1.regno);
    printf("Enter phone number of the student\n");
    scanf("%s",s1.num);
    printf("Enter favourite subject of the student\n");
    fflush(stdin);
    scanf("%[^\n]%*c",s1.favsub);
    printf("Enter CGPA of the student\n");
    scanf("%f",&s1.cgpa);
    printf("Student record successfully made\n\n");
    printf("Details of student are -:\n");
    printf("Name - %s\n",s1.name);
    printf("Reg No. - %s\n",s1.regno);
    printf("Phone - %s\n",s1.num);
    printf("Fav. Subject - %s\n",s1.favsub);
    printf("CGPA - %0.2f",s1.cgpa);
    return 0;
}