#include<stdio.h>
int maze(int n, int m){
    int rightWays = 0;
    int downWays = 0;
    if (n==1 && m==1) return 1;
    if (n==1){   //cannot go down
        rightWays += maze(n,m-1);
    }
    if (m==1){   //cannot go down
        downWays += maze(n-1,m);
    }
    if (n>1 && m>1){
        rightWays += maze(n,m-1);
        downWays += maze(n-1,m);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}

int main (){
    int n; //no of rows
    printf("enter no of rows of maze : ");
    scanf("%d",&n);
    int m;
    printf("enter no of coulumns of maze : ");
    scanf("%d",&m);
    int noOfWays = maze(n,m);
    printf("%d",noOfWays);
    return 0;
}