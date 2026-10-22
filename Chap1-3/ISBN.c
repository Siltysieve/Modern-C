#include <stdio.h>

int main(){
    int gs1, ident, pub_code, item, checknum;
    printf("Enter ISBN: \n");
    scanf("%d-%d-%d-%d-%d", &gs1, &ident, &pub_code, &item, &checknum);
    printf("GS1 prefix:%d\nGroup identifier:%d\nPublisher code:%d\nItem number:%d\nCheck digit:%d\n",gs1, ident, pub_code, item, checknum);
    return 0;
}