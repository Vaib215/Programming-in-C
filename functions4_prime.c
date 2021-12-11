#include <stdio.h>
int isPrime(int a){
    int z=0;
    for (int i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            z++;
        }
    
    }
    if (z==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main(){
    //Author: VAIB
    int a;scanf("%d",&a);
    printf("%d\n",isPrime(a));
    return 0;
}