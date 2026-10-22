/* Prints a table of squares using a for statement */
// Smallest value of n integer that causes failure is : 46341
// Smallest value of n short that causes failure is : 182
// Smallest value of n long that causes failure is : 3037000500
#include <stdio.h>
int main(void)
{
long i, n;
printf("This program prints a table of squares.\n");
printf("Enter number of entries in table: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
printf("%10ld%10ld\n", i, i * i);
}

// My machine stores integer in 32 bits, short in 16 bits, long in 64 bits.
