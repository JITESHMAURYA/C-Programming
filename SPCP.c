#include<stdio.h>
int main(){
    int cp;
    printf("enter cost price : ");
    scanf("%d",&cp);
    int sp;
    printf("enter selling price : ");
    scanf("%d",&sp);
   /*if(sp>cp){
        printf("Profit");
    }
    if(cp>sp){
        printf("loss");
    } 
    if(cp==sp){
        printf("no loss no profit");
    }
    return 0;*/
    if(sp>cp){
        printf("profit");   
    }
    else if(cp>sp){
        printf("loss");   
    }
    else{
        printf("no loss no profit");
    }
}