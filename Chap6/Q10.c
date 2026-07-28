#include <stdio.h>

int main(){
    int d1, d2, m1, m2, y1, y2;
        printf("Enter a date (dd/mm/yy): ");
        scanf("%d/%d/%d", &d1, &m1, &y1);

    if ( y1 == 0 && m1 == 0 && d1 == 0) {
            return 0;
        }

    for (;;) {
        printf("Enter a date (dd/mm/yy): ");
        scanf("%d/%d/%d", &d2, &m2, &y2);
        if ( y2 == 0 && m2 == 0 && d2 == 0) {
            break;
        }
        if (y2 < y1 || (y2 == y1 && m2 < m1) || (y2 == y1 && m2 == m1 && d2 < d1)) {
            y1 = y2; 
            m1 = m2; 
            d1 = d2;
        }
    }
    
    printf("%.2d/%.2d/%.2d is the earliest date\n", d1, m1, y1);

    return 0;
}