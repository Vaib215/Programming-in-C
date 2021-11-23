#include <stdio.h>

int main(int argc, char const *argv[]){
    //Author: VAIB
    int a;
    printf("Enter a number whose table you want :\n");
    scanf("%d",&a);
    printf("Table of %d is :\n",a);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",a,i,a*i);
    }
    
    return 0;
}