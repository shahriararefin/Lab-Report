#include <stdio.h>
int main() {
int i, num, fact=1;
printf("Enter a number: ");
scanf("%d", &num);

for(i=num;i>=1;i--){
    fact=fact*i;

}

printf("Factorial is: %d ",fact);
return 0;
}