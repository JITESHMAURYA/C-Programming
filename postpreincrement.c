#include<stdio.h>
int main(){
    /*int x=5; 
    printf("%d ",x);
    printf("%d",x++);*/
    //x++ means, first use x then increment----output-->5 5
    //++x means, first increment then use x----output-->5 6
    int x=4,y=0,z;
    while(x>=0){
        x--;
        y++;
        if(x==y)
            continue;
        else 
            printf("\n%d%d",x,y);    

    }
}