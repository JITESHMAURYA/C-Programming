#include<stdio.h>
int main(){
    char str[20]="college";
    printf("%s\n",str);
    //2nd index pe 'l'
    for(int i=6;i>=2;i--){
        str[i+1]=str[i];
    }
    str[2]='k';
    printf("%s",str);
    return 0;
}