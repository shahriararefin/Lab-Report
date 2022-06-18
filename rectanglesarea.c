#include<stdio.h>
int main() {

    float length, breadth, area;

    printf("Enter the length of a rectangle: \n");
    scanf("%f", &length);

    printf("Enter the breadth of a rectangle: \n");
    scanf("%f", &breadth);


    area= length*breadth;
    printf("Rectangle's area is: %.1f", area);

   

    return 0;
}