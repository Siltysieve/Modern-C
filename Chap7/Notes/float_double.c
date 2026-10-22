
#include <stdio.h>

int main(){

float f; // Single-precision floating-point
//  %e, %f, and %g are used for reading and writing single-precision floating-point numbers (previous chapter) 

/*

■ Floating types
● Real floating types (float, double, long double)
● Complex types (float _Complex, double _Complex, long dou-
ble _Complex)

*/

double d; // Double-precision floating-point
// When reading a value of type double, put the letter l in front of e, f, or g

//when scanning we use %lf for double
scanf("%lf", &d);
// while printing we can use either %lf or %f
printf("%f\n", d);
long double ld; // Extended-precision floating-point
// constants can be specified to be stored in float types by writing F at the end of constant ex: 57.0F 
        
    return 0;
}