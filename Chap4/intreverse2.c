#include <stdio.h>

int main(){
int input, reverse, first, last;
printf("Enter a two digit integer: ");
scanf("%d", &input);
last = input % 10; // gives the last digit of the number
first = input / 10; // removes the last digit of the number and gives the number
printf("%d%d", last, first);
return 0;
}
