#include <stdio.h>

int main(){

    int x, y, z;
    printf("Enter a date (dd/mm/yyyy): \n");
    scanf("%d/%d/%d", &x, &y, &z);


    printf("You entered the date %d%.2d%.2d",z , y, x);




    return 0;
}