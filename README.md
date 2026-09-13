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

## Task 2
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

## Task 3
#include <stdio.h>

int main() {
    char name[100];
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    puts("The student name: ");
    puts(name);
    return 0;
}
    
## Task 4
#include <stdio.h>
int main(){
    int lenght, width, area, perimeter;
    printf("\nEnter lenght: ");
    scanf("%d", & lenght);
    printf("\nEnter width: ");
    scanf("%d", & width);
    area = lenght * widht;
    perimeter = 2*(lenght + width);
    printf("\nArea of the rectangle is %d", area);
    printf("\nPerimeter of the rectangle is %d", perimeter);
    return 0;
}


