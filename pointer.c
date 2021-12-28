#include <stdio.h>

int main(){
    //Author: VAIB
    int var=10;
    int*ptr;
    ptr=&var;
    printf("%d\n",var);
    printf("%d\n",*ptr);
    printf("%p\n",&var);
    printf("%p\n",ptr);
    printf("%d\n",*(&var));
    return 0;
}