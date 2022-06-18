#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter The year: ");
    scanf("%d",&a);
    if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    {
        printf("%d year is leap year", a);
    }
    else
    {
        printf("%d year is not leap year",a);
    }
    return 0;

}