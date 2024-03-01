#include<stdio.h>
int main(){
    int arr[7]={1,4,3,8,19,5,12};
    int max=arr[0]; 
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}