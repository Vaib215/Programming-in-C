#include <stdio.h>

int main(){
    //Author: VAIB
    int n,arr[100],i,key;
    printf("Enter no. of elements: \n");
    scanf("%d",&n);
    printf("Enter the array:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter no. to be searched :\n");
    scanf("%d",&key);
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            break;
        }
        
    }
    
    if (i<n)
    {
        printf("Element is at %d index\n",i);
    }
    else
    {
        printf("%d not found.\n",key);
    }
        
    
    return 0;
}