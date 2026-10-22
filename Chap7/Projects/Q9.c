#include <stdio.h>
#include <ctype.h>

int main(){
    int hour, min;
    char c;
    printf("Enter a 12 hour time: \n");
    scanf("%2d:%2d", &hour, &min);
    while ((c = getchar()) != '\n') {
        switch (toupper(c)) {
            case 'p': case 'P':
            hour = hour + 12;
            break;
            default:
            break;
        }
    }
    printf("Equivalent 24-hour time: %2d:%2d\n", hour, min);

    return 0;
}