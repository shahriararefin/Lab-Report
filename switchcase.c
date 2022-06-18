#include <stdio.h>
int main(){

char op;
float num1, num2;
printf("Enter two numbers\n");
scanf("%f %f", &num1, &num2);

printf("Enter an operator\n");
scanf(" %c", &op);

switch (op)
{

    case '+':
        printf("%.1f+%.1f = %.1f\n", num1, num2, num1+num2 );
        break;

    case '-':
        printf("%.1f - %.1f = %.1f\n", num1, num2, num1-num2 );
        break;

    case '*':
        printf("%.1f*%.1f = %.1f\n", num1, num2, num1*num2 );
        break;

    case '/':
        printf("%.1f / %.1f = %.1f\n", num1, num2, num1/num2 );
        break;

    default:
        printf("Your are giving wrong input", op);

}



return 0;
}