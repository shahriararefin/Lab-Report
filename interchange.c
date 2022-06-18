#include<stdio.h>
int main() {
    int C, D,temp;
    printf("Enter the value for C and D: ");
    scanf("%d %d", &C, &D);

    temp=C;
    C=D;
    D=temp;

    printf("Value of C is %d and Value of D is %d", C,D);

    return 0;
}