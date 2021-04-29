#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
typedef struct tm tm;
typedef struct
{
    char name[20];
    char contact[20];
    char diagnosis[20];
    char doctor_incharge[20];
    int icu;
    tm date;
}pat;


int main()
{
    printf("Shaarang\n19BCT0215\n");
    FILE *fp,*ft;
    fp = fopen("patient.dat","rb+");
    if(fp==NULL)
    {
        fp = fopen("patient.dat","wb+");
        if(fp==NULL)
        {
            printf("Error opening the file\n");
            exit(0);
        }
    }
    pat s;
    int choice,f;
    int psize=sizeof(s);
    char pno[20];
    char d[20];
    int day=27,m=4,y=2021;
    do{
        printf("Enter a choice:\n1. Add new patient\n2. Discharge a patient\n3. Modify the patient record wrt diagnosis\n4. List the patients in the ICU\n5. List the patients who are taking treatment under a particular doctor.\n6. Display the name of the person who has been in the hospital the longest\n7. Exit\n");
        fflush(stdin);
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            fseek(fp,0,SEEK_END);
            printf("Enter patient's name, contact no., diagnosis, (1/0) if patient is in ICU or not, doctor's name who's treating the patient and date of admission\n");
            scanf("%s %s %s %d %s %s",s.name,s.contact,s.diagnosis,&s.icu,s.doctor_incharge,d);
            sscanf(d, "%d/%d/%d" ,&s.date.tm_mday,&s.date.tm_mon,&s.date.tm_year);
            fwrite(&s,psize,1,fp);
            break;
        
        case 2:
            rewind(fp);
            printf("Enter the patient's name\n");
            scanf("%s",d);
            ft = fopen("temp.dat","wb");
            while(fread(&s,psize,1,fp)==1)
            {
                if(strcmp(s.name,d)!=0)
                {
                    fwrite(&s,psize,1,ft);
                }
            }
            fclose(ft);
            fclose(fp);
            remove("patient.dat");
            rename("temp.dat","patient.dat");
            fp=fopen("patient.dat","rb+");
            break;

        case 3:
            rewind(fp);
            printf("Enter the patient's name who's records you want to modify\n");
            scanf("%s",d);
            while(fread(&s,psize,1,fp)==1)
            {
                if(strcmp(s.name,d)==0)
                {
                    fseek(fp,-psize,SEEK_CUR);
                    printf("Enter patient's name, contact no., diagnosis, (1/0) if patient is in ICU or not, doctor's name who's treating the patient and date of admission\n");
                    scanf("%s %s %s %d %s %s",s.name,s.contact,s.diagnosis,&s.icu,s.doctor_incharge,d);
                    sscanf(d,"%d/%d/%d",&s.date.tm_mday,&s.date.tm_mon,&s.date.tm_year);
                    fwrite(&s,psize,1,fp);
                    printf("Record successfully modified\n");
                    break;
                }
            }
            break;

        case 4:
            rewind(fp);
            printf("Patient's who are in ICU are -:\n");
            while(fread(&s,psize,1,fp)==1)
            {
                if(s.icu==1)
                {
                    printf("Name: %s\n",s.name);
                    printf("Contact Number: %s\n",s.contact);
                    printf("Diagnosis: %s\n\n",s.diagnosis);
                }
            }
            break;

        case 5:
            rewind(fp);
            printf("Enter the doctor's name\n");
            scanf("%s",d);
            while(fread(&s,psize,1,fp)==1)
            {
                if(strcmp(s.doctor_incharge,d)==0)
                {
                    printf("Name: %s\n",s.name);
                    printf("Contact Number: %s\n",s.contact);
                    printf("Diagnosis: %s\n\n",s.diagnosis);
                }
            }
            break;

        case 6:
            rewind(fp);
            while(fread(&s,psize,1,fp)==1)
            {
                if(s.date.tm_year<y || (s.date.tm_year==y && s.date.tm_mon<m) || (s.date.tm_year==y && s.date.tm_mon==m && s.date.tm_mday<day))
                {
                    strcpy(d,s.name);
                    y = s.date.tm_year;
                    m=s.date.tm_mon;
                    day=s.date.tm_mday;
                }      
            }
            printf("%s\n",d);
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