#include <stdio.h>
int main(){
  float tempC, tempF;
  printf("Enter temperature in Celcius: ");
  scanf("%0.2f", & tempC);
  tempF = (tempC * 9/5) + 32;
  printf("The temperature in Fahrenheit is %0.2f\n", tempF);
  return 0;
}
