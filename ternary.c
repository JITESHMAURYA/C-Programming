#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    //ternary operator
    //exp1 ? exp2 ? exp3
    n%2==0 ? printf("the number is even") : printf("the number is odd");
    /*if(n%2==0)
        printf("the number is even");
    else
        printf("the number is odd");*/
    return 0;
}