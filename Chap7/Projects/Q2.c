#include <stdio.h>

int main(){
    long i, n, clause;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
    clause = i * 1;
    if (clause % 24 == 0) {
        printf("Press Enter to continue...\n");
        getchar();
        printf("%10ld%10ld\n", i, clause);
    }
    else {
        printf("%10ld%10ld\n", i, clause);
    }
    }

    return 0;
}