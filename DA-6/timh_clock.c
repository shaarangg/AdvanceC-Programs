#include<stdio.h>
#include<time.h>
int main()
{
    
    clock_t start,end,total;

    start = clock();
    printf("Shaarang\n19BCT0215\n");
    long unsigned i;
    for(i=0; i<500000000; i++);
    end = clock();

    printf("Total clock-cycles taken by CPU: %ld\n",end-start);
    printf("Total-time taken by CPU: %f\n",end-start/CLOCKS_PER_SEC);
    return 0;
}