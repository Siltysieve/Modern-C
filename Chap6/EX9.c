#include <stdio.h>

int main() {

    for (int i = 10; i > 0; i--) {
        if (i == 5) {
            continue;
        }
        printf("%d \n", i);
    }

    for (int i = 10; i > 0; i--) {
        if (i == 5) {
            goto non;
        }
        printf("%d \n", i);
        non: ;
    }

    return 0;
}