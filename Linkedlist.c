#include<stdio.h>
#include<alloc.h>
struct nde
{ int data;
struct node *next;
}
int main()
{struct node *new, *cnt, *start=NULL;
int i,n;
prinf("\n Enter no:of values\n");
scanf("%d",&n);
printf("Enter Values");
for(i=0;i<n;i++)
{new=(struct node *)malloc(sizeof(struct node));
scanf("%d",new->data);
new->next=NULL;
if(start==NULL)
{start=new;
cnt=new;
}
else
{cnt->next=new;
cnt=new;}
}
printf("\n Linked List: \n");
for(cnt=start;cnt!=NULL;cnt=cnt->next)
printf("%d",current->data);

print("NULL")
}