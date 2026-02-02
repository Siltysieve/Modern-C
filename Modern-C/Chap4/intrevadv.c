#include <stdio.h>

int main(){
    printf("Enter a three digit number: \n");
    int a , b, c;
    scanf("%1d%1d%1d", &a, &b, &c);
    printf("%d%d%d", c, b, a);
    return 0;
}