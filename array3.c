#include <stdio.h>

int main(){
    //Author: VAIB
    int i,j;
    printf("Enter no. of elements in array.\n");
    scanf("%d",&j);
    printf("Enter the values to be stored in array.\n");
    int array[j];
    for (i = 0; i < j; i++)
    {
        scanf("%d",&array[i]);
    }
    for (i = 0; i < j; i++)
    {
        printf("Value at index %d is %d.\n",i,array[i]);
    }
    return 0;
}