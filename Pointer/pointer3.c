#include<stdio.h>
int main()
{
int a[6]={1,2,3,4,5};
int *pr;
pr=&a;
printf(" Address of a is %p ",pr);
printf(" Address of a[1] is %p ",&a[1]);
printf(" Address of a[2] is %p ",&a[2]);
printf(" Address of a[3] is %p ",&a[3]);
return 0;
}