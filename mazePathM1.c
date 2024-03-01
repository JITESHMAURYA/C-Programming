#include<stdio.h>
int maze(int cr, int cc, int er, int ec){
    int rightWays = 0;
    int downWays = 0;
    if (cr==er && cc==ec) return 1;
    if (cr==er){              //only rightWays call
        rightWays += maze(cr,cc+1,er,ec);
    }
    if (cc==ec){              //only downWays call
        downWays += maze(cr+1,cc,er,ec);
    }
    if (cr<er && cc<ec){
        rightWays += maze(cr,cc+1,er,ec);
        downWays += maze(cr+1,cc,er,ec);
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
    int noOfWays = maze(1,1,n,m);
    printf("%d",noOfWays);
    return 0;
}