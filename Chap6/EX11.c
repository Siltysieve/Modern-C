#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for (int d = 2; d * d <= n; d++) {

        if (n % d == 0){
            printf("number is not prime\n");
            return 0;
        }
    }
    printf("number is a prime\n");
    

    return 0;
}