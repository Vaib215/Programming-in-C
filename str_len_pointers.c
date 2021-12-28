#include <stdio.h>

int main(){
    //Author: VAIB
    char str[100];
    scanf("%s",str);
    char *ptr;
    int i=0;
    ptr = str;
    while(*ptr!='\0'){
        i++;
        ptr++;
    }
    printf("%d\n",i);
    return 0;
}