#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=0;
    while(n>0){
        t=t*10+n%10;
        n/=10;
    }
    printf("%d\n",t);
}