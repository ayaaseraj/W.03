#include <stdio.h>
int Getmax(int a,int b){
if (a>b)
    return a;
else
    return b;
}
int main () {
    int x,y,m;
printf("Enter two numbers: ");
    scanf("%d %d",&x , &y);
    m=Getmax(x,y);
    printf("%d",m);
    return 0;
}
