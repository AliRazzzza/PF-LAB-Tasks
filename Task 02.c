#include <stdio.h>
int main(){
  float obtainedm, totalm, perc;
  printf("\nEnter obtained marks: ");
  scanf("%0.2f", & obtainedm);
  printf("\nEnter total marks: ");
  scanf("%0.2f", & totalm);
  perc = (obtainedm/totalm) * 100;
  printf("Percentage obtained is %0.2f", perc);
  return 0;
}
