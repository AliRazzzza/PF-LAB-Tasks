#include <stdio.h>
int main(){
  int num1, num2, total;
  printf("\nenter number 1: ");
  scanf("%d", & num1);
  printf("\nenter number 2: ");
  scanf("%d", & num2);
  total = num1 + num2;
  printf("Sum of given numbers is: %d", total);
  return 0;
}
