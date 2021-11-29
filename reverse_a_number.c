#include <stdio.h>

int main(){
    //Author: VAIB
    int num;
    int z=0;
    printf("Enter the number to be reversed: ");
    scanf("%d",&num);
    while(num>0){
    z = (z * 10)+(num%10);
    num /=10;
    }
    printf("The reverse is %d\n",z);
    return 0;
}