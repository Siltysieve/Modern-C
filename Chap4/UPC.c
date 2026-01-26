/* Computes a Universal Product Code check digit */
#include <stdio.h>
int main(void)
{
int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,i0,
first_sum, second_sum, total;
printf("Enter the first 11 digit: ");
scanf("%11d", &d);
j5 = d % 10;
j4 = d / 10 % 10;
j3 = d / 100 % 10;
j2 = d / 1000 % 10;
j1 = d / 10000 % 10;
i5 = d / 100000 % 10;
i4 = d / 1000000 % 10;
i3 = d / 10000000 % 10;
i2 = d / 100000000 % 10;
i1 = d / 1000000000 % 10;
i0 = d / 10000000000 % 10;
first_sum = i0 + i2 + i4 + j1 + j3 + j5;
second_sum = i1 + i3 + i5 + j2 + j4;
total = 3 * first_sum + second_sum;
printf("Check digit: %d\n", 9 - ((total - 1) % 10));
return 0;
}