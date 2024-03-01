#include<stdio.h>
int main(){
    char arr[]="College Wallah might not be the best channel for coders";
    //computer automatically puts \0 in this type of initialization of arrays/string but in older method computer don't do the same.
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
}