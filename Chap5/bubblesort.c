#include <stdio.h>
#include <stdbool.h>
void swap(int *x,int  *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    bool switch_made = true;
    int array[] = {3, 6, 76, 12, 651, 1, 53, 62, 12, 2};
    int i, j, n;
    n = 9;
    for (i = 0; i <= n-1 && switch_made == true; i++){
        switch_made = false;
        for(j = 0; j < n-i; j++)
        if (array[j] > array[j + 1] ){
            swap(&array[j], &array[j + 1]);
            switch_made = true;
        }
    }
    for(i = 0; i <= 9; i++){
        printf("%d ", array[i]);
    }

    return 0;
}

