#include <stdio.h>

int main(){
    //Author: VAIB
    int a,b;
    printf("Enter no. of rows and colums: ");
    scanf("%d %d",&a,&b);
    int arr1[a][b];
    //1st Matrix
    printf("Enter elements in 1st matrix\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    //2nd Matrix
    int arr2[a][b];
    printf("Enter elements in 2nd matrix\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }
    //Sum
    printf("Sum of the matrices is\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}