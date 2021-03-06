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
    int flag=0;
    char a[10];
    printf("Enter the string you want to interchange from\n");
    scanf("%s",a);
    char b[10];
    printf("Enter the string you want to interchange to\n");
    scanf("%s",b);
     for(int i=0; i<n; i++){
        if(strcmp(names[i],a)==0){
            strcpy(names[i],b);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("String not present in the list");
    }
    else{
        printf("The list after the name swap:\n");
        for(int i=0; i<n; i++){
            printf("%s\n",names[i]);
        }
    }
}