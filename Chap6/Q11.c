#include <stdio.h>

int main(){
    int n;
    double sum = 1.0, fact = 1.0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
        sum += 1.0/fact;
    }
    
    printf("e ≈ %.10f\n", sum);

    return 0;
}