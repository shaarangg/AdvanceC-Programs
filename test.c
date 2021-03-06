#include<stdio.h>
#include<string.h>
// void print(int x, int y, int z){
//     printf("%d %d %d\n",x,y,z);
// }
// int main(){
//     int a=5;
//     print(a,++a,a++);
//     printf("%d %d %d",a,++a,a++);  // We'll get output 7 7 5 this because arguements 
//                                    // are passed from right to left always in C
//     return 0;
// }
void main(){
    char a[] = "hello";
    char b[2];
    strcpy(b,a);
    printf("%s",b);
    printf("\n%d",strlen(b));
}