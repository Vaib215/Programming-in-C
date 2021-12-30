#include <stdio.h>
void display(){
    static int a=1;
    printf("%d\n",a);
    a++;
}
#define max(a,b) ({typeof (a) _a=(a); typeof (b) _b=(b); _a > _b ? _a:_b; })
#define min(a,b) ({typeof (a) _a=(a); typeof (b) _b=(b); _a < _b ? _a:_b; })
#define swap(x, y, T) do { T tmp = (x); (x) = (y); (y) = tmp; } while(0)
int main(){
    //Author: VAIB
    display();
    display();
    display();
    return 0;
}