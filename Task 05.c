#include <stdio.h>
int main(){
  int marks;
  printf("Enter your marks: ");
  scanf("%d", & marks);
  if(marks >= 80){
    printf("Your grade is A");
  }else if(marks >= 60){
    printf("Your grade is B");
  }else{
    printf("Your grade is C");
  }
  return 0;
}
