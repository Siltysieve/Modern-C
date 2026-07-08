#include <stdio.h>

int main(){

    int hour, minutes;
    scanf("%2d:%2d", &hour, &minutes);
    if (hour>12){
        hour = hour -  12;
    }
    printf("%2d:%2d PM", hour, minutes);


    return 0;
}