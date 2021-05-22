#include<stdio.h>
#include<time.h>
int main()
{
    time_t st,nd;    
    st = time(NULL);
    printf("Shaarang\n19BCT0215\n");
    long unsigned i;
    for(i=0; i<500000000; i++);
    nd = time(NULL);
    printf("Total-time taken by program: %f\n",difftime(nd,st));
}
