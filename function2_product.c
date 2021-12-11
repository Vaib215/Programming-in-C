#include <stdio.h>
int product(int,int);
int main(){
    //Author: VAIB
    int a,b;
    printf("Enter a and b :\n"); 
    scanf("%d %d",&a,&b);
    printf("product is %d\n",product(a,b));
    return 0;
}
int product(int a,int b){
    int c=a*b;
    return c;
}