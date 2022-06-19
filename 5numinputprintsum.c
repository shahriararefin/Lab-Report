#include<stdio.h>
int main(){


    int n,a,b,c,d,e;
    printf("Enter a five digit number: ");
    scanf("%d", &n);
    a=(n/10000);
    b=(n/1000)%10;
    c=(n/100)%10;
    d=(n/10)%10;
    e=n%10;
    printf("%d is the sum of the entered numbers",a+b+c+d+e,n);


    return 0;
}