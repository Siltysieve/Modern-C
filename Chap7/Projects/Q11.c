#include <stdio.h>

int main(){
    char c, ln;

    printf("Enter a first and last name: "); 
    while ((ln = getchar()) == ' ')
    ;
    while ((c = getchar()) != ' ' )
    ;
    while ((c = getchar()) == ' ')
    ;
    while (c != '\n') {
        if (c == ' ') {
            break;
        }
        else {
        putchar(c);
        c = getchar();
        }
    }
    putchar(',');
    printf(" %c\n", ln);

    return 0;
}