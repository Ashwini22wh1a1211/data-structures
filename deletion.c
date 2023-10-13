#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node*p;
};
void deletelast(struct node *head);
void traverse(struct node *head);

int main()
{
        struct node*head=(struct node*)malloc(sizeof(struct node));
        head->data=10;
        head->p=NULL;

        struct node*current=(struct node*)malloc(sizeof(struct node));
        current->data=20;
        current->p=NULL;
        head->p=current;

        current=(struct node*)malloc(sizeof(struct node));
        current->data=30;
        current->p=NULL;
        head->p->p=current;

        current=(struct node*)malloc(sizeof(struct node));
        current->data=40;
        current->p=NULL;
        head->p->p->p=current;

	printf("Before deletion \n");
        traverse(head);
	printf("After deletion \n");
	deletelast(head);
        traverse(head);
}
void deletelast(struct node*head)
{
struct node*temp=head;
if(temp==NULL)
  printf("single linked list is empty\n");
else if(temp->p==NULL)
	{
		free(temp);
		temp=NULL;
	}
	else
	{
		while(temp->p->p!=NULL)
			temp=temp->p;
		free(temp->p);
		temp->p=NULL;
	}
}
void traverse(struct node*head)
{
	struct node*temp=head;
	while(temp!=NULL)
	{
	printf("%d-->",temp->data);
	temp=temp->p;
	}
	printf("NULL\n");
}
