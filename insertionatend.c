#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*p;
};
void insert(struct node *head,int position,int data);
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
	insert(head, 3,50);
	traverse(head);
}
void insert(struct node*head,int position,int data)
{
	struct node*temp=head;
	struct node*new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->p=NULL;

	while(position!=2)
{
	temp=temp->p;
	position--;
}
new->p=temp->p;
temp->p=new;
}
void traverse(struct node*head)
{
	struct node*temp=NULL;
	temp=head;
	while(temp!=NULL)
	{
		printf(" %d-->",temp->data);
		temp=temp->p;
	}
}
		
