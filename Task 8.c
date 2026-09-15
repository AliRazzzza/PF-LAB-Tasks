#include <stdio.h>
int main(){
  int marks;
  printf("\nEnter your marks: ");
  scanf("%d", & marks);
  if(marks >= 50){
    printf("\nYou have passed");
  }else{
    printf("\nYou have Failed");
  }
  return 0;
}
