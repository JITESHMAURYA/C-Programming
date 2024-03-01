#include<stdio.h>
int main(){
    int marks[10]={95,90,31,25,100,50,65,89,97,30};
    for(int i=0;i<=10;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
    return 0;
}