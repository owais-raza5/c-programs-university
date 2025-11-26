#include <stdio.h>

int main(void) {
   int n[5];
   
   for (int i = 0; i < 5; ++i) {              
      n[i] = 0;
   }                                             
   
   printf("%s%8s\n", "Element", "Value");

   for (int i = 0; i < 5; ++i) {               
      printf("%7d%8d\n", i, n[i]);               
   }                                              
}