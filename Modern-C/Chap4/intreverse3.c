#include <stdio.h>

int main(){
int input, reverse, first, middle, last;
printf("Enter a three digit integer: ");
scanf("%d", &input);
last = input % 10; // gives the last digit of the number
input = input / 10; // removes the last digit of the number and gives the number
middle = input % 10;
first = input / 10;
printf("%d%d%d", last, middle, first);
return 0;
}
