#include <stdio.h>

int main(){
    int d1, d2, m1, m2, y1, y2;
    printf("Enter first date (dd/mm/yy): \n");
    scanf("%d/%d/%d", &d1, &m1, &y1);
    printf("Enter second date (dd/mm/yy): \n");
    scanf("%d/%d/%d", &d2, &m2, &y2);
    
    if ( y1 < y2 ){
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d \n",d1, m1, y1, d2, m2, y2);
    }
    else if (y1 > y2){
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d \n",d2, m2, y2, d1, m1, y1); 
    }
    else if ( m1 < m2 ){
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d \n",d1, m1, y1, d2, m2, y2);
    }
    else if ( m1 > m2 ){
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d \n",d2, m2, y2, d1, m1, y1);
    }
    else if ( d1 < d2){
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d \n",d1, m1, y1, d2, m2, y2);
    }
    else if ( d1 > d2){
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d \n",d2, m2, y2, d1, m1, y1);
    }



    return 0;
}