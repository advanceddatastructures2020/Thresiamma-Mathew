#include<stdio.h>
#include<stdlib.h>
struct btnode
{
int value;
struct btnode *l;
struct btnode *r;
}*root=NULL,*temp=NULL,*t2,*t1;
void create();
void insert();
int flag=1;
void main()
{
int ch;
printf("\nOperations\n");
printf("\n1.Insert\n2.Exit\n");
while(1)
{
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
exit(0);
default:
printf("Wrong choice,please enter correct choice");
break;
}
}
}
void create()
{
int data;
printf("Enter data of node to be inserted:");
scanf("%d",&data);
temp=(struct btnode *)malloc(1*sizeof(struct btnode));
temp->value=data;
temp->l=temp->r=NULL;
}
void insert()
{
create();
if(root==NULL)
root=temp;
else
search(root);
}
