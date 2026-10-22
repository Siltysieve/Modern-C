#include <stdio.h>

int main(){
    int n, start;
    printf("Enter number of days in month: " );
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    for (int i = 1, j = 2 - start; j <= n; i++, j++) {
        if (i < start) {
            printf("   ");
            continue;
        }
        printf("%2d ", j);
        if (i % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n"); // to remove %
    return 0;
}