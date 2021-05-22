#include<stdio.h>
#include<time.h>
typedef struct tm tm;
int main()
{
    printf("Shaarang\n19BCT0215\n");
    time_t ct;
    tm *t;
    time(&ct);
    t = localtime(&ct);
    char *currentime;
    currentime = asctime(t);
    printf("Current Time: %s",currentime);
}