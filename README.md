# Weekly_Pay_Calculator
----
 C program to calculate gross pay, taxes, and net pay based on number of hours worked in a week.

## Methodology
- *Number of hours worked per week will be taken as input from the user*


### Gross pay 
- #### If number of hours worked are less than or equal to 40:
        Gross pay = $12/hr
- #### If number of hours worked are more than 40:
        Gross pay = $12/hr for first 40 hours and $18/hr for rest of the hours
    >e.g.,
    > if number of hours worked are 55 than gross pay for first 40 hours will be $12/hr ($12 * 40 = $480) and $18/hr for next 15 hours ($18 * 15 = $270).
    So, Totol gross pay = $480 + $270 = $750.

### Taxes
-       15% for first $300.
-       20% for next $150.
-       25% for rest $300.
    >e.g.,
    > if gross pay = $500, than 
    ``` Tax = 15% of 300 + 20$ of 150 + 25% of 50 ```
    
### Net pay
``` net pay = gross pay - taxes ```
