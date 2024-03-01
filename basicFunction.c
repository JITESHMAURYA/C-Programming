#include<stdio.h>
void greet(){
    printf("Good Morning\n"); //2,6,10
    printf("How are you ?\n"); //3,7,11
    return;  //4,8,12
}
int main(){
    greet(); //1
    greet(); //5
    greet(); //9
    return 0; //13
}