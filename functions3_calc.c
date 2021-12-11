#include <stdio.h>
int calc(int a,char b,int c){
    switch (b)
    {
    case '+':
        return a+c;
        break;
    case '-':
        return a-c;
    case 'x':
        return a*c;
    case '/':
        return a/c;
    case '%':
        return a%c;
    default:
        return 1;
        break;
    }
}
int main(){
    //Author: VAIB
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    printf("= %d\n",calc(a,c,b));
    return 0;
}