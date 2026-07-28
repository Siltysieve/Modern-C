#include <stdio.h>

int main(){
    double sum = 1.0, fact = 1.0, term = 1.0, input;
    printf("Enter a small integer as a limit: ");
    scanf("%lf", &input);

    for (int i = 1; term >= input; i++) {
        fact *= i;
        term = 1.0/fact;
        sum += term;
    }
    
    printf("e ≈ %.10f\n", sum);

    return 0;
}