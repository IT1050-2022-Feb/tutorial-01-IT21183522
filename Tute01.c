/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int i;
  float mark, sum=0;

  for(i=0; i<2; i++){
    printf("Enter mark 0%d : ", i+1);
    scanf("%f", &mark);

    sum+=mark;
  }

  printf("Average : %.2f", sum/2.0);
  return 0;
}

