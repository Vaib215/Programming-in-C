#include <stdio.h>

int main(int argc, char const *argv[]){
    //Author: VAIB
    int a=0,i;
    do
    {
        printf("Enter a number to add. Press 0 to exit.\n");
        scanf("%d",&i);
        a= i+a;
    } while (i!=0);
    printf("The sum is %d\n",a);
    return 0;
}