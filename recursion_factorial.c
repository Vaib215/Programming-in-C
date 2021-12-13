#include <stdio.h>
int fact(int a){
    if(a==1 || a==0){
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
    
}
int main(){
    //Author: VAIB
    printf("Enter a number : ");
    int a; scanf("%d",&a);
    printf("%d! = %d .\n",a,fact(a));
    return 0;
}