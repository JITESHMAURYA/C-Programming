#include<stdio.h>
int stair(int n){
    if(n<=2) return n;
    int totalWays = stair(n-1) + stair(n-2);
    return totalWays;
}
int main (){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d",ways);
    return 0;
}