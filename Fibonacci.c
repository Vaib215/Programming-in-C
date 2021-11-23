#include <stdio.h>

int main(int argc, char const *argv[]){
    //Author: VAIB
    int a=0,b=1,c;
    scanf("%d",&c);
    printf("0\n");
    for (int i = 0; i < c-1; i++)
    {
        b=a+b;
        a=b-a;
        printf("%d\n",a);
    }
    
    return 0;
}