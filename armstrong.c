#include <stdio.h>
int power(int a,int b){
    int pow=1;
    for (int i = 0; i < b; i++)
        {
        pow *=a;
        }
    return pow;
}
int digits(int a){
    int sum=0;
    while(a>0){
        a/=10;
        sum++;
    }
    return sum;
}
int main(){
    //Author: VAIB
    printf("Enter number until which you want Armstrong number series: \n");
    int num,i;scanf("%d %d",&num,&i);
    printf("Armstrong numbers from %d to %d are:\n",num,i);
    while(num<i){
    int sum=0;
    int num2=num;
    while (num>0)
    {
        int digit=num%10;
        sum += power(digit,digits(num2));
        num= num/10;
    }
    if(sum==num2){
        printf("%d\n",num2);
    }
    num=num2+1;
    }
    return 0;
}