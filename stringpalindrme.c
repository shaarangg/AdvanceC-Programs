#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter a string\n");
    char ch[100];
    scanf("%[^\n]s",ch);
    int l = strlen(ch);
    int j = l-1;
    int flag=0;
    for(int i =0; i<l; i++){
        if(ch[i]!=ch[j]){
            flag=1;
            printf("Not Palindrome");
            break;
        }
        j--;
    }
    if(flag==0){
        printf("Palindrome");
    }
    return 0;
}