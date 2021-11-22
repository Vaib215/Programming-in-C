#include <stdio.h>

int main(int argc, char const *argv[]){
    //Author: VAIB
    printf("Enter 1st number : ");
    int a,b;
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter operation :\n1 for addition\n2 for subtraction\n3 for product\n4 for division\n5 for remainder\n");
    int c;
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("%d",a+b);
        break;
    case 2:
        printf("%d",a-b);
        break;
    case 3:
        printf("%d",a*b);
        break;
    case 4:
        printf("%d",a/b);
        break;
    case 5:
        printf("%d",a%b);
        break;
    
    default:
        printf("Padhai Karlo\n");
        break;
    }
    return 0;
}