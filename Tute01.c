/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int count;
   int marks;
   int total = 0;
   float avg;
   for(count = 0; count <= 1; count++)
   {
      printf("Enter marks for subject %d :", count+1);
      scanf("%d",&marks);
      total = total + marks;
   }
   avg = total / 2.0;
   printf("Average marks : %.2f", avg);
  return 0;
}

