#include <stdio.h>

int main(){
    //Author: VAIB
    int a=4;
    int*ptr;
    ptr=&a;
    printf("%p\n",ptr);
    ptr++;
    printf("%p\n",ptr);
    return 0;
}