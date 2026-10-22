#include <stdio.h>

int main(){/* s is converted to int
 */

    // Implicit conversion/typecasting is performed in the following cases.
    /*
    ■ When the operands in an arithmetic or logical expression don’t have the same type. (C performs what are known as the usual arithmetic conversions.)
    ■ When the type of the expression on the right side of an assignment doesn’t match the type of the variable on the left side.
    ■ When the type of an argument in a function call doesn’t match the type of the corresponding parameter.
    ■ When the type of the expression in a return statement doesn’t match the function’s return type.
    */
    // arithmetic conversions
    char c;
    short int s;
    int i;
    unsigned int u;
    long int l;
    unsigned long int ul;
    float f;
    double d;
    long double ld;

    i = i + c; /* c is converted to int */
    i = i + s; /* s is converted to int */
    u = u + i; /* i is converted to unsigned int */
    l = l + u; /* u is converted to long int */
    ul = ul + l; /* l is converted to unsigned long int */
    f = f + ul; /* ul is converted to float */
    d = d + f; /* f is converted to double */
    ld = ld + d; /* d is converted to long double */


    // Conversion during assignment
    /*C follows the simple rule that the expression on the right side of the assignment is converted to
    the type of the variable on the left side.*/
    /*This works great with assignment where the variable on the left is wider but if its narrower, accuracy may
    drop and even produce incorrect and meaningless results*/

    // C99 ranks
    1. long long int, unsigned long long int
    2. long int, unsigned long int
    3. int, unsigned int
    4. short int, unsigned short int
    5. char, signed char, unsigned char
    6. _Bool
    // any data type lower than rank 3 is converted to int or unsigned int
    /*
    ■ The type of either operand is a floating type. As long as neither operand has a complex type,
    the rules are the same as before.
    (The conversion rules for complex types will be discussed in Section 27.3.)
    ■ Neither operand type is a floating type. First perform integer promotion on
    both operands. If the types of the two operands are now the same, the process
    ends. Otherwise, use the following rules, stopping at the first one that applies:
        ● If both operands have signed types or both have unsigned types, convert the operand whose 
        type has lesser integer conversion rank to the type of the operand with greater rank.
        ● If the unsigned operand has rank greater or equal to the rank of the type of
        the signed operand, convert the signed operand to the type of the unsigned
        operand.
        ● If the type of the signed operand can represent all of the values of the type
        of the unsigned operand, convert the unsigned operand to the type of the
        signed operand.
        ● Otherwise, convert both operands to the unsigned type corresponding to the
        type of the signed operand.
    Incidentally, all arithmetic types can be converted to _Bool type. The result
    of the conversion is 0 if the original value is 0; otherwise, the result is 1.
    */


    return 0;
}