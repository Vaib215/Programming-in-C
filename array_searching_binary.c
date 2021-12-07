#include <stdio.h>

int main(){
    //Author: VAIB
    printf("Enter no. of elements : ");
    int n; scanf("%d",&n);
    printf("Enter elements of array :\n");
    int i,arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched: \n");
    int key; scanf("%d",&key);
    int low=0,high=n-1;
    for ( i = 0; i <= n; i++)
    {
        int middle= (low+high)/2;
        if (key==arr[middle])
        {
            printf("%d is at %d index.\n",key,middle);
            break;
        }
        else if (key<arr[middle])
        {
            while (key<arr[middle])
            {
                high=middle-1;
               break;
            }      
        }
        else
        {
            while (key>arr[middle])
            {
                low=middle+1;
                break;
            }
        }
        
        
    }
    
    return 0;
}