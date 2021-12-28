#include <stdio.h>

int main(){
    //Author: VAIB
    char str[100];
    gets(str);
    int *ptr;
    int i=0;
    ptr = str;
    while(*pt!='\0'){
        i++;
        pt++;
    }
    printf("%d",i);
    return 0;
}