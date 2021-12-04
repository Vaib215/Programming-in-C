#include <stdio.h>

int main(){
    //Author: VAIB
    int j;
    printf("Enter no. of elements in array.\n");
    scanf("%d",&j);
    int array[j];
    int k=0;
    for (int i = 0; i < j; i++)
    {
        scanf("%d",&array[i]);
        k+=array[i];
    }
    printf("The average is %d\n",k/j);
    return 0;
}