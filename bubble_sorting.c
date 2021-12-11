#include <stdio.h>

int main(){
    //Author: VAIB
    int n;printf("Enter no. of elements :\n"); 
    scanf("%d",&n); int arr[n];
    printf("Enter %d elements :\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
            
        }
        
    }
    printf("The sorted array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    // 5 4 2 8 1

    return 0;
}