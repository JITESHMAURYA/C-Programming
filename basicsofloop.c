#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i=i+1){
        printf("Hii Jitesh\n");
        //the current value of i is [n+1].
        //the scope of i variable is limited in the for loop.
        //if we declare i as [int i] outside the loop then its scope will be global.
    }

    return 0;
}
  
