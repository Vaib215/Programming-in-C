#include <stdio.h>
int sumby5(int a,int b){
    int z=0;
    for (int i = a; i < b; i++)
    {
        if (i%5==0)
        {
            z+=i;
        }
        
    }
    return z;
}
int main(){
    //Author: VAIB
    int a=100,b=200;
    printf("%d\n",sumby5(a,b));
    return 0;
}