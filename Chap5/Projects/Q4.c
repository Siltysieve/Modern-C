#include <stdio.h>
 int main(){
    int knots;

    printf("Enter a wind speed in knots: \n");

    scanf("%d", &knots);

    if (knots < 1)
    printf("calm winds");
    else if (knots <= 3)
    printf("Light air");
    else if (knots <= 27)
    printf("Breeze");
    else if (knots <= 47)
    printf("Gale");
    else if (knots <= 63)
    printf("Storm");
    else if (knots > 63)
    printf("Hurricane");

    return 0;
 }