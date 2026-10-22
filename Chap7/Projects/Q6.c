#include <stdio.h>

int main(){
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;

    printf("%d\n", sizeof(s));
    printf("%d\n", sizeof(i));
    printf("%d\n", sizeof(l));
    printf("%d\n", sizeof(f));
    printf("%d\n", sizeof(d));
    printf("%d\n", sizeof(ld));


    return 0;
}