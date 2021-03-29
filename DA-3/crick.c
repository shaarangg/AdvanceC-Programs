#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[10];
    int age;
    int nm;
    int *score;
    float avg;
}player;
void sort(player p[5]);
int main(){
    printf("Shaarang\n19BCT0215\n");
    player p[5];
    for(int i=0; i<5; i++){
        printf("Player %d details :\n",i+1);
        printf("Enter name\n");
        fgets(p[i].name,10,stdin);
        printf("Enter age\n");
        scanf("%d",&p[i].age);
        printf("Enter no. of matches played\n");
        scanf("%d",&p[i].nm);
        p[i].score = (int *)malloc(sizeof(int)*p[i].nm);
        p[i].avg=0.0;
        printf("Enter the runs scored in each match\n");
        for(int j=0; j<p[i].nm; j++)
        {
            scanf("%d",&p[i].score[j]);
            p[i].avg+=p[i].score[j];
        }
        p[i].avg = p[i].avg/p[i].nm;
        printf("\n");
        fflush (stdin);
    }
    sort(p);
    return 0;
}
void sort(player p[]){
    player temp;
    for(int i=0; i<4; i++){
        for(int j=0; j<4-i; j++){
            if(p[j].avg > p[j+1].avg){
                temp = p[j];
                p[j] = p[j+1];
                p[j+1]=temp;
            }
        }
    }
    printf("All the cricketers in the database are :\n");
    for(int i=0; i<5; i++){
        printf("Name : %s",p[i].name);
        printf("Age : %d\n",p[i].age);
        printf("No. of matches : %d\n",p[i].nm);
        printf("Average Score : %f\n",p[i].avg);
        printf("\n");
    }
}