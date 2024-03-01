#include<stdio.h>
int main(){
    int i=1;
    while(i<=100){ //it can be [i<101]
        printf("%d ",i);
        i--;//for i-- it is infinite loop XD
    }
    return 0;
}