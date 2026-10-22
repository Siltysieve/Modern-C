#include <stdio.h>

int main(){
    int great = 1;
    printf("#####Largest Number Finder(from a set of values)#####\n");
    for (int i = 1; i > 0;) {
        printf("Please choose an option:\n 1. Enter a positive number.\n 2. Exit. (type 0)\n");
        scanf("%d", &i);
        if (i > great) {
            great = i;
        }
    }
    printf("%d is the greatest number\n", great);
    return 0;
}