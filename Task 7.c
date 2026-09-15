#include <stdio.h>
int main(){
  int num1, num2, num3;
  float avg;
  printf("\nenter number 1: ");
  scanf("%d", & num1);
  printf("\nenter number 2: ");
  scanf("%d", & num2);
  printf("\nenter number 3: ");
  scanf("%d", & num3);
  avg = (num1 + num2 + num3)/ 3;
  printf("Average is %0.3f\n", avg);
  return 0;
}
