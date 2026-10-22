#include <stdio.h>

int main(){
    int n1, n2;
    printf("Enter a two-digit number: \n");
    scanf("%1d%1d", &n1, &n2);
    printf("You entered the number ");
    if (n1 == 1){
        switch (n2){
            case 0: printf("Ten"); break;
            case 1: printf("Eleven"); break;
            case 2: printf("Twelve"); break;
            case 3: printf("Thirteen"); break;
            case 4: printf("Fourteen"); break;
            case 5: printf("Fifteen"); break;
            case 6: printf("Sixteen"); break;
            case 7: printf("Seventeen"); break;
            case 8: printf("Eighteen"); break;
            case 9: printf("Nineteen"); break;
        }
    }
    switch (n1){
            case 2: printf("Twenty"); break;
            case 3: printf("Thirty"); break;
            case 4: printf("Forty"); break;
            case 5: printf("Fifty"); break;
            case 6: printf("Sixty"); break;
            case 7: printf("Seventy"); break;
            case 8: printf("Eighty"); break;
            case 9: printf("Ninety"); break;
        }
    if (n1 != 1){
            printf("-");
            switch (n2){
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }
    }
    printf(".\n");
    return 0;
}