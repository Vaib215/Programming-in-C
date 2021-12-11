#include <stdio.h>

int main(){
    //Author: VAIB
    int n;printf("Enter no. of elements: \n");
    scanf("%d",&n); int arr[n];
    printf("Enter %d elemnts\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        int min= i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min]>arr[j])
            {
                min=j;
            }
            if (min!=i)
            {
                int temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp; 
            }          
            
        }
        
    }
    printf("Sorted Array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}