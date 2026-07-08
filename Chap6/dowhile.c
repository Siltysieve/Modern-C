// do {statement} while ( expression ) ;
// condition is tested *after* execution of loop body

#include <stdio.h>

int main(void) {
    int i, n;
    i = 10;
    n = 0;
    do {
        printf("T minus %d and counting\n", i);
        --i;
    } while (i > 0);
    do {    i = i / 10;
            n++;            
    } while (i != 0);
    printf("The number has %d digits \n", n);

return 0;

}