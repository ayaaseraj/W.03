#include <stdio.h>
int fibonacci(int a){
    int r=0;
    if (a==0)
        return 0;
    else if (a==1)
        return 1;
        r=fibonacci(a-1)+fibonacci(a-2);
return r;
}
int main () {
    int x,m;
    printf("Enter the number: ");
    scanf("%d",&x);
    m=fibonacci(x);
    printf("%d",m);
    return 0;
}
