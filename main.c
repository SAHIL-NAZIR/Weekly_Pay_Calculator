#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hours_worked = 0;         // number of hours worked in a week.
    float basic_pay = 12.00;        // $ paid per hour under estimated hours.
    float estimated_hours = 40.00;  // number of hours above which will be considered overtime.
    float overtime_pay = 18.00;     // $ paid per hour for overtime hours.
    float gross_pay, taxes, net_pay;
    /// Taking number of hours worked
    printf("Enter the number of hours worked in the week: ");
    scanf("%f", &hours_worked);
    /// Calculating gross pay///
    if(hours_worked <= estimated_hours)
    {
        gross_pay = basic_pay * hours_worked;
    }
    else
    {
        gross_pay = (basic_pay * estimated_hours) + ((hours_worked - estimated_hours) * overtime_pay);
    }
    /// Calculating taxes///
    if(gross_pay <= 300)
    {
        taxes = (15 * gross_pay) / 100;
    }
    else if(gross_pay <= 450)
    {
        taxes = ((15 * 300) / 100) + ((20.0 * (gross_pay - 300.0)) / 100);
    }
    else
    {
        taxes = ((15 * 300) / 100) + ((20 * 150) / 100) + ((25 * (gross_pay - 450)) / 100);
    }
    /// Calculating net pay///
    net_pay = gross_pay - taxes;
    /// Returning values
    printf("Gross pay = %.2f\n", gross_pay);
    printf("Taxes = %.2f\n", taxes);
    printf("Net pay = %.2f\n", net_pay);
}
