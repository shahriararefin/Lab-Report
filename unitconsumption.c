#include<stdio.h>
int main(){

    float power_consumed, bill,charge_per_unit,surcharge=0,total_bill;

    printf("Power consumed by a customer: ");
    scanf("%f", &power_consumed);

    if(power_consumed<=200) {
        charge_per_unit= 0.50;
        surcharge=0;
        bill=charge_per_unit*power_consumed;
        total_bill=surcharge+bill;
    }

    else if(power_consumed>=200 && power_consumed<400){
        charge_per_unit= 0.65;
        surcharge= 100;
        bill=charge_per_unit*power_consumed;
        total_bill=surcharge+bill;


    }

    else if(power_consumed>=400 && power_consumed<600){
        charge_per_unit= 0.85;
        surcharge=230;
        bill=charge_per_unit*power_consumed;
        total_bill= surcharge+bill;

    }

    else {
        charge_per_unit=1.00;
        bill=charge_per_unit*power_consumed;
        surcharge=390;
        total_bill=bill+surcharge;
    }

    printf("Power Consumed: %.2f\n", power_consumed);
    printf("Surcharge amount: %.2f\n", surcharge);

    printf("Total bill to be paid: %.2f",total_bill);


    return 0;
}