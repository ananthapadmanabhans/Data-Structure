  
#include<stdio.h>
int main()
{
   
   int abc[5][4];
   
   int i, j;
    printf("Enter values for array );
   for(i=0; i<5; i++) 
   {
      for(j=0;j<4;j++)
      {
        
         scanf("%d", &abc[i][j]);
      }
   }
      for(i=0; i<5; i++) 
   {
      for(j=0;j<4;j++)
      {
        
         printf("%d Array is", abc[i][j]);
      }
   }
   return 0;
}