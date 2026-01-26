#include <stdio.h>

int main(){
    int x, a, b, c;
    float y;
    printf("Enter item no.(in integers): \n");
    scanf("%d", &x);
    
    printf("Enter unit price($): \n");
    scanf("%f", &y);
    
    printf("Enter purchase date(dd/mm/yyyy): \n");
    scanf("%d/%d/%d", &a, &b, &c);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%-d\t$ %7.2f\t%-.2d/%.2d/%d", x, y, a, b, c);



    return 0;
}