#include <stdio.h>

int main(){
    //Author: VAIB
    int a,b; scanf("%d %d",&a,&b);
    int *ptr1,*ptr2;
    ptr1=&a;ptr2=&b;
    printf("%d\n",*ptr1>*ptr2?*ptr1:(*ptr1==*ptr2?*ptr1:*ptr2));
    return 0;
}