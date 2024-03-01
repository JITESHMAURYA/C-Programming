#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%3==0){
        if(n%5==0){
            printf("the number is divisible by 5 and 3");        
        }
        else{
            printf("the number is not disible by 5 and 3");      
        }
    }  
    else{
        printf("the number is not disible by 5 and 3");
    }    
    return 0;   
}