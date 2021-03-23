#include<stdio.h>
#include<stdlib.h>
void strcpy1(char *d, char*s);
void strcat1(char *a, char *b);
int strlen1(char *a);
int main(void){
    printf("SHAARANG SINGH\n19BCT0215\n");
    int n;
    char *a = (char *)malloc(sizeof(char)*10);
    char *b = (char *)malloc(sizeof(char)*10);
    printf("Enter a string\n");
    scanf("%s",a);
    int l = strlen1(a);
    printf("Length of the string is %d\n",l);
    strcpy1(b,a);
    printf("Copy of string a %s\n",b);
    printf("Enter string 2\n");
    scanf("%s",b);
    strcat1(a,b);
    printf("String after combination is %s",a);
    free(a);
    free(b);
    return 0;
}
int strlen1(char *a){
    int i=0;
    while(*a){
        a++;
        i++;
    }
    return i;
}
void strcat1(char *a, char *b){
    int l = strlen1(a);
    a = a+l;
    while(*b){
        *a=*b;
        a++;
        b++;
    }
}
void strcpy1(char *d, char*s){
    while(*s){
        *d=*s;
        d++;
        s++;
    }
}