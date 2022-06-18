#include<stdio.h>
int main()
{
    double Physics,Chemistry,Biology,Mathematics,Computer, Percentage;
    printf("Enter obtained marks in five subjects: ");
    scanf("%lf %lf %lf %lf %lf",&Physics,&Chemistry,&Biology,&Mathematics,&Computer);

    Percentage =((Physics + Chemistry + Biology + Mathematics + Computer)/5) * 100 ;

    if( Percentage >= 90)
    {
        printf("Grade A",Physics);
    }
    else if ( Percentage>=80)
    {
        printf("Grade B",Chemistry);
    }
    else if ( Percentage>= 70)
    {
        printf("Grade C",Biology);
    }
    else if (Percentage>= 60)
    {
        printf("Grade D",Mathematics);
    }
    else if (Percentage>=50)
    {
        printf("Grade E",Computer);
    }
    else
    {
        printf("Grade F");
    }
    return 0;

}