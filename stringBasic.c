#include<stdio.h>
int main(){
    char arr[5]={'a','t','l','a','s'};
    printf("%c",arr[1]);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);


    //NULL CHARACTER
    char arr[]={'H','e','l','l','o'};
    char ch='\0'; //null character
    printf("%d",ch); //print null value i.e. 0 coz of %d but will not print anything if %c will be there 
    
    
    //PRINTING
    char arr[]={'H','e','l','l','o','\0'};
    int i=0;
    while(arr[i]!='\0'){
        printf("%c ",arr[i]);
        i++;
    }
    return 0;
}