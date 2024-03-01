#include<stdio.h>
int main(){
    int a=5;
    int* x;
    x=&a;
    printf("%p\n",&a);
    printf("%p",x); //%p se address print hota hai
    return 0;
} 