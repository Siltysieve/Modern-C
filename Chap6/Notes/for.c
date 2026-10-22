 // for ( expr1 (initialization) ; expr2 (condition) ; expr3 (in/decrementation) ) { statement }
 // expr3 is executed after the loop

#include <stdio.h>

int main (void) {

    for (int i = 10; i > 0; --i) {

    printf("T minus %d and counting\n", i);

    }
// the i initialized in the for loop can't be used outside it.




}