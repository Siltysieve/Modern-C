#include <stdio.h>

int main(){
    unsigned int u;
    scanf("%u", &u); /* reads u in base 10 */
    printf("%u", u); /* writes u in base 10 */
    scanf("%o", &u); /* reads u in base 8 */
    printf("%o", u); /* writes u in base 8 */
    scanf("%x", &u); /* reads u in base 16 */
    printf("%x", u); /* writes u in base 16 */

    // When reading or writing a short integer, put the letter h in front of d, o, u, or x:
    short s;
    scanf("%hd", &s);
    printf("%hd", s);

    //When reading or writing a long integer, put the letter l (“ell,” not “one”) in front of d, o, u, or x:
    long l;
    scanf("%ld", &l);
    printf("%ld", l);

    // When reading or writing a long long integer (C99 only), put the letters ll in front of d, o, u, or x:
    long long ll;
    scanf("%lld", &ll);
    printf("%lld", ll);

    
    return 0;
}