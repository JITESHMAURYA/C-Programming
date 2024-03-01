#include<stdio.h>
int main(){
    //1st matrix order
    int m;
    printf("Enter no of rows of 1st matrix : ");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns of 1st matrix : ");
    scanf("%d",&n);
    // input the first matrix
    int a[m][n];
    printf("\nEnter elements fo 1st matrix : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //2nd matrix order
    int p;
    printf("Enter no of rows of 2nd matrix : ");
    scanf("%d",&p);
    int q;
    printf("Enter no of columns of 2nd matrix : ");
    scanf("%d",&q); 
    // input the second matrix
    int b[p][q];
    printf("\nEnter elements fo 2nd matrix : ");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    // check
    if(n!=p){
        printf("The matrices cannot be multiplied");
    }
    else{
        // multiplication
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                // i row of a , j column of b
                for(int k=0;j<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){  
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}