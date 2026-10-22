#include <stdio.h>

int main(){
    float first= 12E+2; // translates to 12 * 10^2;
    float second= 123e-4;

    printf("%f %f\n", first, second);

    return 0;
}