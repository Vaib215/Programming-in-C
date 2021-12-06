#include <stdio.h>

int main(){
    //Author: VAIB
    int n; scanf("%d", &n);
    for(int i = 1; i < n; i++) {
        int tmp = i, sum = 0;
        while(tmp > 0) {
            int d = tmp % 10;
            tmp /= 10;
            sum += (d*d*d);
        }
        if(sum == i) {
            printf("%d \n", i);
        }
    }
    return 0;
}