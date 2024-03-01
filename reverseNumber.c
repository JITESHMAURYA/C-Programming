#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int r=0; //for 0 input, the compiler will not execute while loop but as we know reverse of 0 is 0 and hence we get 0 as output. SO USE THESE TYPE OF VARIABLES [here r] VERY WISELY
    while (n>0){ //Here we can use [n!=0] also
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    /*while (n>0){ //Here we can use [n!=0] also
        r=r+(n%10);
        r=r*10;
        n=n/10;
    }
    r=r/10;
    */
   printf("The Reversed Number is : %d",r);
}