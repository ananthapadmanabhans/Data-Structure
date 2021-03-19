#include <stdio.h>

int MAX = 8;       
int stack[8];     
int top = -1;            

int isempty() 
{

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() 
{

   if(top == MAX)
      return 1;
   else
      return 0;
}

int peek()
 {
   return stack[top];
}

int pop() 
{
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else
    {
      printf("Stack is empty.\n");
   }
}

int push(int data) 
{

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Stack is full.\n");
   }
}

int main() {
  
   push(3);
   push(5);
   push(9);
   push(15);
   push(20);
   push(25);

   printf("Element at top  %d\n" ,peek());
   printf("Elements: \n");

  
   while(!isempty())
    {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack Empty: %s\n" , isempty()?"true":"false");
   
   return 0;
}