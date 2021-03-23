#include<stdio.h>
#include<string.h>
void reverse(char *str){
    if(*str){
        reverse(str+1);
        printf("%c",*str);
    }
}
int main(){
    int n;
    printf("Shaarang Singh\n19BCT0215\n");
    char str[100];
    printf("Enter the string\n");
    scanf("%s",str);
    reverse(str);
}
/*void rev(char *a,int i,int n){
    if(i==n){
        return;
    }
    else{
        rev(a,i+1,n);
        printf("%c",a[i]);
    }
}
int main(){
    int n;
    char a[100];
    printf("Enter a string\n");
    scanf("%s",a);
    n = strlen(a);
    int i=0;
    rev(a,i,n);
}*/
