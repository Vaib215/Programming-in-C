#include <stdio.h>

int main(int argc, char const *argv[]){
    //Author: VAIB
    int a;
    scanf("%d",&a);
    int i=1;
    while (i<=a)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    
    return 0;
}