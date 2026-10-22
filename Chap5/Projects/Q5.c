#include <stdio.h>

int main(){
    printf("enter the taxable income: \n");
    float income, due_tax;
    scanf("%f", &income);

    if (income <= 750.00f)
    due_tax = income * .01f;
    else if (income < 2250)
    due_tax = 7.50f + income * .02f;
    else if (income < 3750)
    due_tax = 37.50f + income * .03f;
    else if (income < 5250)
    due_tax = 82.50f + income * .04f;
    else if (income <= 7000)
    due_tax = 142.50f + income * .05f;
    else if (income > 7000)
    due_tax = 230.00f + income * .06f;


    printf("your taxable income is: %.2f", due_tax);


    return 0;
}