#include <stdio.h>

int main(){
    //Author: VAIB
    int a; scanf("%d",&a);
    int*ptr;
    int k=1;
    ptr=&a;
    while ((*ptr)>0)
    {
        k=k*(*ptr);
        (*ptr)--;
    }
    
    printf("%d\n",k);
    return 0;
}