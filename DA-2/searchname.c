#include<stdio.h>
#include<string.h>
int main(){
    printf("SHAARANG SINGH\n19BCT0215\n");
    printf("Enter the no. of names you want to enter in the list\n");
    int n;
    scanf("%d",&n);
    printf("Enter the names you want to enter in the list\n");
    char names[n][10];
    for(int i=0; i<n; i++){
        scanf("%s",&names[i]);
    }
    char a[10];
    int flag=0;
    printf("Enter the name you want to search\n");
    scanf("%s",a);
    for(int i=0; i<6; i++){
        if(strcmp(a,*(names+i))==0){
            flag=1;
            printf("Name found");
            break;
        }
    }
    if(flag==0){
        printf("Name not found");
    }
}