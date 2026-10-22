//  while ( expression ) {
//      statement
//  }

#include <stdio.h>

int main(){
    int i, n;
    n = 11;
    i = 1;
    while (i < n) /* controlling expression */ {
    i = i * 2; /* loop body */
    printf("%d", i);
    }

    while (i > 0) {
    printf("T minus %d and counting\n", i--);
    }
/*When a while statement is executed, the controlling expression is evaluated
first. If its value is nonzero (true), the loop body is executed and the expression is
tested again. The process continues in this fashion—first testing the controlling
expression, then executing the loop body—until the controlling expression eventu-
ally has the value zero.*/
}