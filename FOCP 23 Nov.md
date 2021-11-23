# Pre-Test and Post-Test Loop

Pre (Entry Controlled) => while loop and for loop

Post (Exit Controlled) => do-while loop

```
//WAP to print odd numbers
#include <stdio.h>
int main(){
    int j=1;
    while(j+=2;j<=10){
        printf("%d",j);
    }
    printf("%d",j);
}
```

*Output* - 
`3 5 7 9 11`

**Infinite While**
```
#include <stdio.h>
int main(){
    int x=10,y=2;
    while(x+y-1){
        printf("%d",x--,y--);
    }
```

# For Loop

Initialization => Condition -
* If True => Statement=>Increament or Decreament => Condition
* If False => End For

**Syntax**
-
```
for(declaration,condition,increa/decrea-ment){
    expression here;
    another exp here;
}
```

**Q. WAP to print even numbers.**
```
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",a);
    for(b=1;b<a/2;b++){
        printf("%d",2b);
    }
    return 0;
}
```

**Q. WAP to print a table**
**Q. WAP to print cubic series**