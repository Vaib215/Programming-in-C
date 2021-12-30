#include <stdio.h>
void addone(int*ptr){
    (*ptr)++;
}
int main()
{
    //Author: VAIB
    int *p, j = 10;
    p = &j;
    addone(p);
    printf("%d\n", *p);
    return 0;
}