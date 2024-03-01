#include<stdio.h>
#include<string.h>
int main(){
    //char str[]="College Wallah";
    //char* ptr=&str[0];
    //char* ptr=str;  //ptr now points to str[0]
    //printf("%p",ptr);


    char str[]="College Wallah";
    char* ptr=str;
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }

    //printf("%p\n",&str[0]); 
    //printf("%p",str);       //address of array is address of its first element
    return 0;
}