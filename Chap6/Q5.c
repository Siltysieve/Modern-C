#include <stdio.h>

int main(){
    int first, last;

    printf("Enter an integer: ");
    scanf("%d", &first);

    do {
        last = first % 10; // gives the last digit of the number
        first = first / 10; // removes the last digit of the number and gives the number
        printf("%d", last);
    }
    while (first != 0);

    return 0;
}
