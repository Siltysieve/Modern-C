#include <stdio.h>

int main(){
    char c;
    int wordcount = 0, wordchar = 0; 

    printf("Enter a sentence: ");

    while ((c = getchar()) == ' ')
    ;

    while (c != '\n') {
        if (c == ' ') {
            wordcount++;
            c = getchar();
            continue;
        }
        else {
            wordchar++;
            c = getchar();
        }
    }
    printf("Average word length: %.1f\n", (float) wordchar / (wordcount + 1));


    return 0;
}