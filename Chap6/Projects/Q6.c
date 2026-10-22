#include <stdio.h>

int main(){
    int n;
    printf("enter an integer: ");
    scanf("%d", &n);

    for (int i = 2;;i += 2) {
        if (n < i * i) {
            break;
        }
        printf("%d\n", i * i);
    }

    return 0;
}