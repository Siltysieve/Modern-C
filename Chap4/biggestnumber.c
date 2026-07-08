#include <stdio.h>

int main(){
    int array[10] = {494, 55, 342 ,6 , 5324, 64354, 55, 24, 234, 239545};
    int big = array[0];
    int *address;
    address = &array[0];
    for(int i=1;i<=9;i++){

        if(big < array[i]){
            big = array[i];
            address = &array[i];
        }


    }
    printf("%d %p", big, address);
    return 0;
}