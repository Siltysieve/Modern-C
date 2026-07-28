#include <stdio.h>

int main(){
    int m, n, r;
    printf("Enter two numbers: ");
    scanf("%d %d",&m, &n);

    for (;;) {
        if ( n == 0) {
            printf("%d is the gcd\n", m);
            return 0;
        }
        r = m % n;
        m = n;
        n = r;
    }

    return 0;
}