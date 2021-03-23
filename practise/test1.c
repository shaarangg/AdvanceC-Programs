#include <stdio.h>
#include<string.h>
void reverse(char *c, int begin, int end){
    char ch;
    if(begin>=end)
        return;
    ch = (*(c+begin));
    *(c+begin) = *(c+end);
    *(c+end) = ch;
    reverse(c, ++begin, --end);
}
int main(){
    printf("Enter a string to reverse: ");
    char s[1000];
    scanf("%s",s);
    int begin = 0, end = strlen(s)-1;
    reverse(s,begin,end);
    printf("%s", s);
    return 1;
}