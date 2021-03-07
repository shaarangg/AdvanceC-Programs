#include<stdio.h>
void conv(int a);
int main(){
    int a;
    
    scanf("%d",&a);
    conv(a);
    return 0;
}
void conv(int a){
    static char h[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    if(a/16==0)
    {
    printf("%c",h[a%16]);
    return;
    }
    conv(a/16);
    printf("%c",h[a%16]);
}