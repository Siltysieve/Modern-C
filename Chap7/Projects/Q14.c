#include <stdio.h>
#include <math.h>

int main(){
    double x, y = 0, avg = 1;

    printf("Enter a positive number: ");
    scanf("%lf", &x);
    while (fabs(y - avg) > 0.00001) {
        y = avg;
        avg = ((x/y) + y) / 2;
    }
    printf("Square root: %lf\n", y);

    return 0;
}