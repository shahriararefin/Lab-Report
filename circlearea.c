#include<stdio.h>
#define PI 3.1416
int main() {

    float circle_area, radius;
    printf("Enter radius of the circle\n");

    scanf("%f", &radius);
    circle_area= PI*(radius*radius);
    printf("The area of the circle is %f", circle_area);


    return 0;
}