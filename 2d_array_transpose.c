#include <stdio.h>

int main(){
    //Author: VAIB
    int a,b;
    printf("Enter number of rows and columns.\n");
    scanf("%d %d",&a,&b);
    printf("Enter elements in matrix: ");
    int array[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }
    printf("Array is\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}