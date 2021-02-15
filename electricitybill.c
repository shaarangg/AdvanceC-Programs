#include<stdio.h>
int main(){
    int units;
    printf("Enter the units\n");
    scanf("%d",&units);
    int bill=0;
    if(units>500){
        bill=(units-500)*10 + 100*8 + 100*6 + 300*4;
    }
    else if(units<501 && units>400){
        bill=(units-400)*8 + 100*6 + 300*4;
    }
    else if(units<401 && units>300){
        bill = (units-300)* + 300*4;
    }
    else{
        bill = units*4;
    }
    printf("The electricity bill is %d",bill);
}