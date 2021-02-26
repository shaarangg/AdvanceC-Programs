#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    printf("Shaarang Singh\n19BCT0215\n");
    char a[100];
    fgets(a,100,stdin);
    int cw=1,cl=0;
    int l = strlen(a);
    int b[122];
    int d;
    for(int i=0; i<122; i++){
        b[i]=0;
    }
    for(int i=0; i<l-1; i++){
        if(a[i]=='.' || a[i]=='!' || a[i]=='?'){
            cl+=1;
        }
        if(a[i]==' '){
            cw+=1;
        }
        d=a[i];
        if(d>=65 && d<=90 || d>=97 && d<=122){
            b[d]+=1;
        }
    }
    printf("No. of lines = %d\n",cl);
    printf("No. of words = %d\n",cw);
    printf("Frequence of Character\n");
    for(int i=0; i<122; i++){
        if(b[i]!=0){
            printf("%c : %d\n",i,b[i]);
        }
    }
    return 0;
}