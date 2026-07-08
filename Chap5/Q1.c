#include <stdio.h>

int main(){
    int digit;
    scanf("%d", &digit);
    if (digit <= 9){
        printf("The digit has one number");
    }
    else if (digit <= 99){
        printf("The digit has two numbers");
    }
    else if (digit <= 999){
        printf("The digit has three numbers");
    }
    else if (digit <= 9999){
        printf("The digit has four numbers");
    }

    return 0;
}