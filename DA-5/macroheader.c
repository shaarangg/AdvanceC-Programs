#include<stdio.h>
#include"macro.h"
int main() {
    printf("Shaarang\n19BCT0215\n\n");
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = circleArea(radius);
    printf("Area = %.2f", area);
    return 0;
}