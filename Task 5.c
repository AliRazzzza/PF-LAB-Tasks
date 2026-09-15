#include <stdio.h>
int main(){
 int num, cube, sqr;
  printf("\nEnter a number: ");
  scanf("%d", & num);
  sqr = num * num;
  cube = sqr * num;
  printf("Square of the number is %d", sqr);
  printf("Cube of the number is %d", cube);
  return 0;
}
