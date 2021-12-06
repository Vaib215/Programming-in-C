#include <stdio.h>

int main(){
    //Author: VAIB
    printf("Enter no. of elements\n");
    int a;
    scanf("%d",&a);
    int arr[a];
    printf("Enter elements of array:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed array is\n");
    for (int i = a-1; i >= 0; i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}