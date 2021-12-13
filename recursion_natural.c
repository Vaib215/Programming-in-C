#include <stdio.h>
int i=1;
int natural(int a){
    if(a>0){
        printf("%d\n",i);
        i++;
        return natural(a-1);
    }
}
int main(){
    //Author: VAIB
    natural(50);
    return 0;
}