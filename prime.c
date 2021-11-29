#include <stdio.h>

int main(int argc, char const *argv[]){
    //Author: VAIB
    int a;
    scanf("%d",&a);
    for (int b = 2; b <= a; b++)
    {
        int c=1;
        for ( int i = 2; i <= b/2; i++)
        {
            if (b%i==0)
            {
                c==0;
                break;
            }
            
        }
        if (c==1)
        {
            printf("%d\n",b);
        }
        
    } 
}
    
    return 0;
}