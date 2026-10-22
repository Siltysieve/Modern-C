// can use commas in for loop initialization box to intialize multiple variables

#include <stdio.h>

int main() {

    for (int sum = 1, i = 0, j = 13; i < 3; ++i, sum = i + j) {

        printf("%d\n", sum);


    }
}