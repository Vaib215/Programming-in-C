#include <stdio.h>

int main(){
    //Author: VAIB
    int fact;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&fact);
    for (int i = fact; i >1; i--)
    {
        fact *= (i-1);
    }
    printf("The factorial is %d\n",fact);
    return 0;
}