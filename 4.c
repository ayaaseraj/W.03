#include <stdio.h>
//ID is 1234
//password is 5678
int chk(int n,int p){
if (n==1234){
       for (int i=0;i<3;i++){
           printf("Enter the password: ");
            scanf("%d",&p);
        if (p==5678){
        printf("Welcome!");
        return 0;
        }

        else {
            if (i<2)
                printf("You are not registered\n");
            else
                printf("No more tries\n");}
        }
}
    else
        printf("Wrong ID");
    return 0;
}
int main () {
    int n,p;
    printf("Enter the ID: ");
    scanf("%d",&n);
    chk(n,p);
    return 0;
}
