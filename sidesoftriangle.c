#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter 1st side : ");
    scanf("%d",&a);
    printf("enter 2nd side : ");
    scanf("%d",&b);
    printf("enter 3rd side : ");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("you can make a triangle");
    }
    else{
        printf("you can not make a triangle");
    }
    return 0;
}   