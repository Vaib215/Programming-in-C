#include <stdio.h>
int sum(int,int);
int main(){
    //Author: VAIB
    int a,b;
    printf("Enter a and b :\n"); 
    scanf("%d %d",&a,&b);
    printf("Sum is %d\n",sum(a,b));
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}