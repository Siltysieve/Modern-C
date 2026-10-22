#include <stdio.h>

int main(void)
{   
    float num1, num2, result_num;
    char c;
    printf("Enter an expression: ");
    scanf("%f", &num1);
    c = getchar();
    scanf("%f", &num2);
        // Caluculator
    while (c != '\n') {
        switch (c) {
            case '+':
            result_num = num1 + num2;
            break;
            case '-':
            result_num = num1 - num2;            
            break;
            case '*':
            result_num = num1 * num2;
            break;
            case '/':
            result_num = num1 / num2;
            break;
            default:
            break;            
        }
        c = getchar();
        if (c == '\n') {
            break;
        }
        else {
        scanf("%f", &num2);
        }
        num1 = result_num;
    }
    printf("Value of expression: %.1f\n", result_num);
    return 0;
}