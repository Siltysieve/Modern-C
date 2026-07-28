#include <stdio.h>

int main(){
    int a, b, m, n, r;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &a, &b);

    m = a;
    n = b;
    for (;n != 0;) {
        r = m % n;
        m = n;
        n = r;
    }

    a = a / m;
    b = b / m;
    printf("In lowest terms: %d/%d\n", a, b);

    return 0;
}