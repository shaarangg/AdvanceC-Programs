#include <stdio.h>
#include <time.h>
typedef struct tm tm;
int main()
{
    printf("Shaarang\n19BCT0215\n\n");
    time_t tim;
    char a[9];
    int y;
    tm t;
    printf("Enter day: ");
    scanf("%d", &t.tm_mday);
    fflush(stdin);
    printf("Enter month: ");
    scanf("%d", &t.tm_mday);
    fflush(stdin);
    printf("Enter year: ");
    scanf("%d", &y);
    fflush(stdin);
    t.tm_year = y - 1900 + 1;
    printf("Enter time: ");
    scanf("%s", a);
    sscanf(a, "%d:%d:%d", &t.tm_hour, &t.tm_min, &t.tm_sec);
    tim = mktime(&t);
    time_t ts = time(&tim);
    printf("Time in seconds: %d\n", ts);
    printf("Time entered by user: %s", ctime(&tim));
}