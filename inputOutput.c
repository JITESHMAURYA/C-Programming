#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    //scanf("%s",str);      //--->conventional way
    //scanf("%[^\n]s,str"); //--->also valid
    //gets(str);            //--->new way
    printf("your input was : %s",str);  // only the first word will be considered
   
   
    /*char str[]="College wallah is best";
    printf("%s",str); 
    puts("Hello Everyone");*/
    return 0;
}