#include <stdio.h>

int main(){
    //Author: VAIB
    int k;
    scanf("%d",&k);
    int a[] ={1,2,3,4,5};
    int mid= (0+6)/2;
    for (int i = 0; i < 5; i++)
    {
        
        if (a[mid]==k)
        {
            printf("%d\n",mid);
            break;
        }
        else
        {
            if (k>a[mid])
            {
                mid+=1;
            }
            else
            {
                mid-=1;
            }
            
        }
        
    }
    
    return 0;
}