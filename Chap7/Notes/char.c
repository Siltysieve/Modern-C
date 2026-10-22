#include <stdio.h>
// these examples are based on ascii character set

int main(){
   char ch;
   ch = 'a'; /* lower-case a */
   ch = 'A'; /* upper-case A */
   ch = '0'; /* zero */
   ch = ' '; /* space */ 

   //  C treats characters as small integers.
   int i;
   i = 'a'; /* i is now 97 */
   ch = 65; /* ch is now 'A' */
   ch = ch + 1; /* ch is now 'B' */
   ch++; /* ch is now 'C' */

   if ('a' <= ch && ch <= 'z') {
    ch = ch - 'a' + 'A';
   }
   for (ch = 'A'; ch <= 'Z'; ch++) {

   }

   // C also allows us to have signed and unsigned chars
   // by default we don't know if the chars are signed or unsigned.
   signed char sch;
   unsigned char uch;

   scanf("%c", &ch);
   printf("%c\n", ch);

   scanf(" %c", &ch); /* skips white space, then reads ch */
   // a blank in a scanf format string means “skip zero or more white-space characters.

   while (getchar() != '\n')
    ;
   while ((ch = getchar()) == ' ')
    ;
    return 0;
}