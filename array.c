#include <stdio.h>

int main(){
    //Author: VAIB
    int array[]={1,2,3,4,5};
    int k,l;
    printf("Enter the number to find: ");
    scanf("%d",&k);
    for (int i = 0; i < 5; i++)
    {
        if (array[i]==k)
        {
            printf("%d is at index %d\n",k,i);
            l=0;
            break;
        }
    }
    if (l)
    {
        printf("Not Found\n");
    }
    
    return 0;
}