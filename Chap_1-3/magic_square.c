#include <stdio.h>

int main(){
    int one, two , three, four, five, six, seven, eight, nine, ten, elvn, twlv, thrtn, frtn, fvtn, sxtn;
    printf("Enter 1-16 numbers in any order: \n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&one, &two , &three, &four, &five, &six, &seven, &eight, 
        &nine, &ten, &elvn, &twlv, &thrtn, &frtn, &fvtn, &sxtn);
    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\nRow sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d",one,
         two , three, four, five, six, seven, eight, nine, ten, elvn, twlv, thrtn, frtn, fvtn, sxtn, one + two + three + four, five + six + seven + eight,
          nine + ten + elvn + twlv, thrtn + frtn + fvtn + sxtn, one + five + nine + thrtn, two + six + ten + frtn
          , three + seven + elvn + fvtn, 
          four + eight + twlv + sxtn, one + six + elvn + sxtn, four + seven + ten + thrtn);

    return 0;
}