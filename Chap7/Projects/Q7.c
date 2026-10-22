/* Adds two fractions */
#include <stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char c;
        // Entering of data
        printf("Enter the expression of two fractions: ");
        scanf("%d / %d", &num1, &denom1);
        c = getchar();
        printf("Enter second fraction: ");
        scanf("%d / %d", &num2, &denom2);
        // Caluculator
        switch (c) {
            case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The sum is %d/%d\n", result_num, result_denom);
            break;
            case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The sum is %d/%d\n", result_num, result_denom);
            break;
            case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            printf("The sum is %d/%d\n", result_num, result_denom);
            break;
            case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            printf("The sum is %d/%d\n", result_num, result_denom);
            break;
            default:
            break;            
        }
    
    return 0;
}