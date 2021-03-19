#include <stdio.h>

int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int s, i;

   s = 0;
   
   for(i=9;i>= 0;i--) {
      s=s+arr[i];      
   }

   printf("Sum of array is %d.", s);   

   return 0;