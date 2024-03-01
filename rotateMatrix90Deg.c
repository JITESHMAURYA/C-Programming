#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows/columns : ");
    scanf("%d",&n);
    printf("Enter all the elements\n");
    int arr[n][n];
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    //transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //rotate
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            int tamp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=tamp;
            j++;
            k--;
        }
    }
    printf("\n");
    //output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}