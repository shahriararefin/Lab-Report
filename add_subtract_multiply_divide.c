#include<stdio.h>
int main() {

    int num1, num2, sum;
    printf("Input two integer number: ");
    scanf("%d %d", &num1, &num2);

    sum= num1+num2;
    printf("Sum after adding two number: %d\n", sum);

    sum= num1-num2;
    printf("Sum after subtracting two number: %d\n", sum);

    sum= num1*num2;
    printf("Sum after multiplying two number: %d\n", sum);

    sum= num1/num2;
    printf("Sum after dividing two number: %d\n", sum);




    return 0;
}