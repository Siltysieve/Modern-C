// Break: Exits the loop
// Continue: Skips the rest of loop body and continues onto next iteration
// Goto: identifier : statement
//  goto identifier ;
// Break usable in Case and loops while Continue only usable in loops
#include <stdio.h>
int main(void)
{
int i = 0,n,d;
for (;;) {
    i++;
    if (i==i) {
        break;
    }
}
for (d = 2; d < n; d++)
if (n % d == 0)
goto done;
done:
if (d < n)
printf("%d is divisible by %d\n", n, d);
else
printf("%d is prime\n", n);

}