#include<stdio.h>
int main()
{
   
   int abc[5][4];
   
   int i, j,s=0;
    printf("Enter values for array" );
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
        
         s=s+abc[i][j];
      }
   }
   printf("%dSum is ", s );
   return 0;
}
