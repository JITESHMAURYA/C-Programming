#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for (int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The %dth fibonacci is : %d",n,a);
    
    return 0;
}   