#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 1st no");
scanf("%d ", &a);
printf("Enter 2nd no");
scanf("%d ", &b);
c=a;
a=b;
b=c;
printf("1st no is %d",a);
printf("2nd no is %d",b);
return 0;
}