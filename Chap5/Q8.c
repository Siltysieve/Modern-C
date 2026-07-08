#include <stdio.h>
int main(){
    int hour, min, mins;
    printf("Enter a 24 hour time: \n");
    scanf("%2d:%2d", &hour, &min);
    mins = (hour * 60) + min;
    if (mins <= 532){
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    }
    else if (mins <= 631){
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    }
    else if (mins <= 723){
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 a.m.");
    }
    else if (mins <= 803){
        printf("Closest departure time is 12:47 a.m., arriving at 3:00 a.m.");
    }
    else if (mins <= 892){
        printf("Closest departure time is 2:00 a.m., arriving at 4:08 a.m.");
    }
    else if (mins <= 1042){
        printf("Closest departure time is 3:45 a.m., arriving at 5:55 a.m.");
    }
    else if (mins <= 1222){
        printf("Closest departure time is 7:00 a.m., arriving at 9:20 a.m.");
    }
    else if (mins > 1042){
        printf("Closest departure time is 9:45 a.m., arriving at 11:58 a.m.");
    }
    
    
    
    
    
    
    return 0;

}