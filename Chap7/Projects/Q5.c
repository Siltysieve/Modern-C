#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    short sum;
    printf("Enter a word: ");
    for (;;) {
        c = getchar();
        if (c == '\n') {
            break;
        }
        switch (toupper(c)) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
            sum++;
            break;
            case 'D': case 'G':
            sum += 2;
            break;
            case 'B': case 'C': case 'M': case 'P':
            sum += 3;
            break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
            sum += 4;
            break;
            case 'K':
            sum += 5;
            case 'J': case 'X':
            sum += 8;
            break;
            case 'Q': case 'Z':
            sum += 10;
            break;
            default:
            break;
        }        
    }
    printf("Scrabble value: %d", sum);
    return 0;
}