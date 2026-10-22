#include <stdio.h>

int main(){
    // sizeof ( type-name )    
    printf("%d\n", sizeof (short));

    /*when we print some sizeof, the compiler defines a type called size_t which requires special modifiers. read page 151*/
    printf("Size of int: %zu\n", sizeof(int)); /* C99 only */
    return 0;
}s