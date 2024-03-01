#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=0;
    for (int i=2;i<=n-1;i++){
        if(n%i==0) 
            a=1;
            break; 
    }
    if (n==1) printf("1 is neither Prime nor Composite")
    else if (a==0) printf("Prime Number");
    else printf("Composite Number");

    return 0;
}
//for 2 the loop will run from 2 to 1 with +1 increment which is not possible hence loop will not execute.