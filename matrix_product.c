    #include <stdio.h>

    int main(){
        int x,y; scanf("%d %d",&x,&y);
        int arr1[x][y],arr2[x][y];
        for (int j = 0; j < y; j++)
        {
            for (int i = 0; i < x; i++)
        {
            scanf("%d",&arr1[i][j]);
        }
        }
        for (int j = 0; j < y; j++)
        {
            for (int i = 0; i < x; i++)
        {
            scanf("%d",&arr2[i][j]);
        }
        }
        for (int j = 0; j < y; j++)
        {
            for (int i = 0; i < x; i++)
        {
            printf("%d ",arr1[i][j]*arr2[j][i]);
        }
        printf("\n");
        }
        return 0;
    }