#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n+1-i;j++){
            printf("* ");
        }
        /*for (int j=n;j>=i;j=j-1){
            printf("* ");
        }*/
        printf("\n");
    }

    return 0;
}