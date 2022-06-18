#include<stdio.h>
#include <math.h>

float main()

{

    float bonus,gross_salary,computers_sold, price_of_a_computer, Total_monthly_Sale,commission;
    float Minimum_base_salary = 1500.00, Commission_on_the_total_monthly_sales = .02, Bonus_for_every_computer_sold = 200.00;
    printf("Input the price of a computer: ");
    scanf("%f", &price_of_a_computer);

    printf("Computers sold during the month: ");
    scanf("%f", &computers_sold);
    Total_monthly_Sale= price_of_a_computer*computers_sold;
    bonus= computers_sold*Bonus_for_every_computer_sold;
    commission= Total_monthly_Sale*Commission_on_the_total_monthly_sales;

    gross_salary=Minimum_base_salary+bonus+commission;
    printf("Gross Salary: %.2f", gross_salary);

}
