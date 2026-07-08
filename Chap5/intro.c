#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int usr;

    printf("enter a number\n");
    
    scanf("%d", &usr);

    switch (usr)  {

        case 1: printf("entered 1");
                break;
        case 2: printf("entered 2");
                break;
        case 3: printf("entered 3");
                break;
        default: printf("nothing");
                break;
    }

    return  0;
}