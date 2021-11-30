#include <stdio.h>

int main(){
    //Author: VAIBHAV KUMAR SINGH
    //UID: 21BCS10561
    int num,choice;
    printf("================\n Enter a number \n================\n       ");
    scanf("%d",&num);
    printf("==================================================\nPress the index of the operation you want to apply\n==================================================\n");
    printf("1 to check odd or even\n2 to check positive or negative\n3 to find out the square\n==================================================\n                      ");
    scanf("%d",&choice);
    printf("==================================================\n");
    switch (choice)
    {
    case 1:
        if (num%2==0)
        {
            printf("%d is an even number.\n",num);
        }
        else
        {
            printf("%d is an odd number.\n",num);
        }
               
        break;
    case 2:
        if (num>0)
        {
            printf("%d is a positive number.\n",num);
        }
        else if (num==0)
        {
            printf("%d is zero.\n",num);
        }
        else
        {
            printf("%d is a negative number.\n",num);
        }
        break;
    case 3:
        printf("Square of %d is %d.\n",num,num*num);                 
        break;
    default:
        printf("Wrong Input.\n");
    }
    printf("==================================================\n");
    return 0;
}