#include<stdio.h>
int main()
{
   
   int abc[5][4];
   
   int i, j,s=0,a;
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
   a=s/(4*50);
   printf("%dAverage is ", a );
   return 0;
}