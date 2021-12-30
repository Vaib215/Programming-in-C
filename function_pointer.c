#include <stdio.h>
int add(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    //Author: VAIB
    int(*ptr)(int,int);
    ptr=&add;
    int result=ptr(30,40);
    printf("%d\n",result);
    return 0;
}