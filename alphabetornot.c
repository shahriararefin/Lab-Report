#include<stdio.h>
int main() {

    char c;
    printf("Enter any character: ");
    scanf("%c", &c);


    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    printf("Entered character %c is an Alphabet", c);

    else
        printf("Entered character %c is not an Alphabet",c);

}