#include <stdio.h>

int main(){
    /*
    Cast expression: ( type-name ) expression
    type-name specifies the type to which the expression should be converted.
    */
    float f = 123.54, frac_part = 0;
    printf("%f\n", frac_part = f - (int) f);

    /*
    Cast expressions enable us to document type conversions that would take
    place anyway:
    */
    i = (int) f; /* f is converted to int */
    return 0;
}