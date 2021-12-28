#include <stdio.h>
int main(){
    //Author: VAIB
    int n; scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int*ptr;
        ptr=&arr[n-i-1];
        printf("%d\n",*ptr);
        
    }
    
    return 0;
}