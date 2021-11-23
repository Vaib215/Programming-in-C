#include <stdio.h>
int main(){
    //Author: VAIB
    int a,b;
    printf("Enter number of even:\n");
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        printf("%d\n",2*b);
    }
    return 0;
}