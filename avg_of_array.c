#include <stdio.h>

int main(){
    //Author: VAIB
    int j,k=0;
    printf("Enter no. of elements in array.\n");
    scanf("%d",&j);
    int array[j];
    printf("Enter elements in array :\n");
    for (int i = 0; i < j; i++)
    {
        scanf("%d",&array[i]);
        k+=array[i];
    }
    float avg= k/j;
    printf("The average is %.2f\n",avg);
    return 0;
}