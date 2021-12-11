#include <stdio.h>
int sumbynum(int a,int b,int c){
    int z=0;
    for (int i = a+1; i < b; i++)
    {
        if (i%c==0)
        {
            z+=i;
        }
        
    }
    return z;
}
int main(){
    //Author: VAIB
    int a,b,c;
    printf("Enter starting, ending limit and divisibility number: \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",sumbynum(a,b,c));
    return 0;
}