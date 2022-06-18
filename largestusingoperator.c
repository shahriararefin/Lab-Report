#include<stdio.h>

int main() {

    int largest, num1, num2, num3;
    printf("Enter three different values: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    largest= (num1>num2)? (num1>num3? num1:num3) : (num2>num3? num2:num3) ;
    printf("Largest number is %d", largest);
    return 0;


}