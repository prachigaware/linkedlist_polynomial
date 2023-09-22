#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int coeff;
	int expo;
	struct node *next;
}NODE;
#define NODEALLOC (NODE *)malloc(sizeof(NODE))
NODE *create(NODE *list)
{
	NODE *newnode,*temp;
	int i,n;
	printf("enter limit of polynomial");
	scanf("%d",&n);
	for(i=n-1;i>=0;i--)
	{
		newnode=NODEALLOC;
		scanf("%d",&newnode->coeff);
		newnode->expo=i;
		newnode->next=NULL;
		if(list==NULL)
		{
			list=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return list;
 } 
 void disp(NODE *list)
 {
 	NODE *temp;
 	for(temp=list;temp!=NULL;temp=temp->next)
 	{
 		printf("%dX^%d +",temp->coeff,temp->expo);
	 }
	 printf("\b");
 }
int main()
{
	NODE *list=NULL;
	list=create(list);
	disp(list);
}
