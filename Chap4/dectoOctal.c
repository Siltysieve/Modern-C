#include <stdio.h>

int main(){
    printf("Enter a number between 0 and 32767: \n");
    int input, a, b, c, d, e;
    scanf("%d", &input);
    a = input % 8;
    input = input / 8;
    b = input % 8;
    input = input / 8;
    c = input % 8;
    input = input / 8;
    d = input % 8;
    input = input / 8;
    e = input % 8;
    input = input / 8;
    printf("Octal form: %d%d%d%d%d", e, d, c, b, a);
    return 0;
}