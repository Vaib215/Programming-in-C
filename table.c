#include <stdio.h>

int main(int argc, char const *argv[]){
    //Author: VAIB
    int a,i=1;
    printf("Enter a number to get its table : ");
    scanf("%d",&a);
    printf("The table of %d is \n",a);
    while (i<=10)
    {
        printf("%d X %d = %d\n",a,i,a*i);
        i++;
    }
    
    return 0;
}