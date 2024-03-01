#include<stdio.h>
int main(){
     int m;
    printf("Enter no of rows of matrix : ");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns of matrix : ");
    scanf("%d",&n);
    int a[m][n];
    printf("\nEnter elements fo matrix : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //spiral print
    printf("\n");
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
    while (count<tne){
        // print the minimum row
        for(int j=minc;j<=maxc && count<tne;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        // print the maximum column
        for(int i=minr;i<=maxr && count<tne;i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        // print the maximum row
        for(int j=maxc;j>=minc && count<tne;j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
        // print the minimum column
        for (int i=maxr;i>=minr && count<tne;i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}

//instead of using [ && count<tne ] in every for loop we can use [ if(count>=tne) break ]