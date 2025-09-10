/* Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit */
#include<stdio.h>
int main()
{
    float unit;
    float bill;
    float r_unit;
    printf("Enter the unit consumed:");
    scanf("%f",&unit);
    switch(1)
    {
        case 1:
            if (unit<=50){
                printf("Electricity Bill:%f",(unit*0.5));
                break;
            }
            else{
                r_unit=unit-50;
                bill=50*0.5;
            }
        
        case 2:
            if(r_unit<=100){
                printf("Electricity Bill:%f",((r_unit*0.75)+bill));
                break;
            }
            else{
                r_unit=r_unit-100;
                bill=bill+(100*0.75);
            }

        case 3:
            if(r_unit<=100){
                printf("Electricity Bill:%f",bill+(r_unit*1.2));
                break;
            }
            else{
                r_unit=r_unit-100;
                bill=bill+(100*1.2);
            }
        
        case 4:
            bill=bill+(r_unit*1.5);
            printf("Electric Bill:%f",bill);
    }

}