#include<stdio.h>
#include<math.h>
int main()
{
    printf("Shaarang\n19BCT0215\n\n");
    double a,num1,num2;

    //Arc Cosine
    printf("Enter a number: ");
    scanf("%lf",&num1);
    fflush(stdin);
    a = acos(num1);
    printf("Arc cosine: %0.2lf\n\n",a);

    
    //Arc Sin
    printf("Enter a number: ");
    scanf("%d",&num1);
    fflush(stdin);
    a = asin(num1);
    printf("Arc sin: %0.2lf\n\n",a);

    
    //Exp
    printf("Enter a number: ");
    scanf("%lf",&num1);
    fflush(stdin);
    a = exp2(num1);
    printf("Exponential: %0.2lf\n\n",a);


    //Abs
    printf("Enter a number: ");
    scanf("%lf",&num1);
    fflush(stdin);
    a = fabs(num1);
    printf("Absolute value: %0.2lf\n\n",a);


    //Floor
    printf("Enter a number: ");
    scanf("%lf",&num1);
    fflush(stdin);
    a = floor(num1);
    printf("Floor: %0.2lf\n\n",a);


    //fdim
    printf("Enter a number: ");
    scanf("%lf",&num1);
    fflush(stdin);
    printf("Enter a number: ");
    scanf("%lf",&num2);
    fflush(stdin);
    a = fdim(num1,num2);
    printf("Fdim: %0.2lf\n\n",a);


    //fmax
    printf("Enter a number: ");
    scanf("%lf",&num1);
    fflush(stdin);
    printf("Enter a number: ");
    scanf("%lf",&num2);
    fflush(stdin);
    a = fmax(num1,num2);
    printf("Max value: %0.2lf\n\n",a);


    //fmin
    printf("Enter a number: ");
    scanf("%lf",&num1);
    fflush(stdin);
    printf("Enter a number: ");
    scanf("%lf",&num2);
    fflush(stdin);
    a = fmin(num1,num2);
    printf("Min value: %0.2lf\n\n",a);


    //fmod
    printf("Enter a number: ");
    scanf("%lf",&num1);
    fflush(stdin);
    printf("Enter a number: ");
    scanf("%lf",&num2);
    fflush(stdin);
    a = fmod(num1,num2);
    printf("Remainder: %0.2lf\n\n",a);

    //Log
    printf("Enter a number: ");
    scanf("%d",&num1);
    fflush(stdin);
    a = logb(num1);
    printf("Natural log: %0.2lf\n\n",a);


    //Pow
    printf("Enter a number: ");
    scanf("%lf",&num1);
    fflush(stdin);
    printf("Enter a number: ");
    scanf("%lf",&num2);
    fflush(stdin);
    a = pow(num1,num2);
    printf("Power: %0.2lf\n",a);

    return 0;
}