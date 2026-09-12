# Post Lab Tasks
## Task 1
#include <stdio.h>

int main() {
    float marks, income;
    printf("\nEnter your marks percentage: ");
    scanf("%f", & marks);
    printf("\nEnter your family income: ");
    scanf("%f", & income);
    if(marks >= 80 || income < 50000){
        printf("\nYou have been qualified for scholarship");
    }else{
        printf("You did not quality for scholarship");
    }
    

    return 0;
}

