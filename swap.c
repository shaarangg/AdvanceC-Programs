#include<stdio.h>
void swap(int a, int b){
    a+=b;
    b = a-b;
    a-=b;
}
int main(){
    int a = 5; int b=6;
    void swap(a,b);
}