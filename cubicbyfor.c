#include <stdio.h>

int main(int argc, char const *argv[]){
    //Author: VAIB
    int a;
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        printf("%d\n",i*i*i);
    }
    
    return 0;
}