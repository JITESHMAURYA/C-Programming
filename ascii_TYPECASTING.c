#include<stdio.h>
int main(){
    /*int x=65;
    printf("%d\n",x);
    char ch = (char)x;
    printf("%c\n",ch);*/

    /*char ch='A';
    printf("%c\n",ch);
    int x=(int)ch;
    printf("%d\n",x);*/

    for (int i=65;i<=90;i++){
        char ch=(char)i;
        printf("%c -> ",ch);
        printf("%d\n",i);
    }
    
    return 0;
}