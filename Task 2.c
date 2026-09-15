#include <stdio.h>

int main() {
    int lateDay;
    printf("Enter num of late days: ");
    scanf("%d", & lateDay);
    if(lateDay == 0){
        printf("No fine");
    }else if(lateDay >= 1 && lateDay <=5){
        printf("Fine Rs 50");
    }else if(lateDay >= 6 && lateDay <= 10){
        printf("Fine Rs 100");
    }else if(lateDay > 10){
        printf("Fine Rs 200");
    }
        return 0;
}
