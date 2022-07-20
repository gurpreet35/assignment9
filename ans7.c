/* Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
 */
#include<stdio.h>
int main(){
    int units,temp;
    float bill,total_bill;
    printf("Input Electricity Units Charges:");
    scanf("%d",&units);
    temp=units;
    if(units>251){
        temp=251;
    }
    switch (temp)
    {
    case 1 ... 50:
         bill=units*0.50;
         total_bill=bill+bill*(0.2);
        printf("Your Electricity Bill is:%f",total_bill);
        break;
    case 51 ... 150:
         bill=units*0.75;
          total_bill=bill+bill*(0.2);
        printf("Your Electricity Bill is:%f",total_bill);
        break;
    case 151 ... 250:
         bill=units*1.20;
          total_bill=bill+bill*(0.2);
        printf("Your Electricity Bill is:%f",total_bill);
        break;
    case 251:
         bill=units*1.50;
          total_bill=bill+bill*(0.2);
        printf("Your Electricity Bill is:%f",total_bill);
        break;
    }
}