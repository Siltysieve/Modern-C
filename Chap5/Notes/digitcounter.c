#include <stdio.h>

int main(){
    int input;
    scanf("%d", &input);

    if (input >= 0){
        if(input < 10){
            printf("The nummber of digits is one");
        }
        else if (input < 100){
            printf("The number of digits is two");
        }
        else if (input < 1000){
            printf("The number of digits is three");
        }
        else if (input < 10000){
            printf("The number of digits is four");
        }
        else{
            printf("Number exceeded limits");
        }
    }
    else {
        printf("Invalid input");
    }


    return 0;
}