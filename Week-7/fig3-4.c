#include <stdio.h>

int main(void) {
   int total = 0;
   int counter = 0;

   printf("%s", "Enter grade, -1 to end: ");
   int grade = -1;
   scanf("%d", &grade);

   while (grade != 0) {
      total = total + grade;
      counter = counter + 1;

      printf("%s", "Enter grade, 0 to end: ");
      scanf("%d", &grade);
   }

   if (counter != 0) {

      double average = (double) total / counter;

      printf("Class average is %.2f\n", average);
   }
   else {
      puts("No grades were entered");
   }
}