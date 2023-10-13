#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*p;
};
void traverse(struct node*);
void insertion(struct node*head,int data);
void main()
{
	struct node*head=(struct node*)malloc(sizeof(struct node));
	head->data=100;
	head->p=NULL;
	struct node*current=(struct node*)malloc(sizeof(struct node));
	current->data=200;
	current->p=NULL;
	head->p=current;
	current=(struct node*)malloc(sizeof(struct node));
	current->data=300;
	current->p=NULL;
	head->p->p=current;
	
	insertion(head,400);
	traverse(head);
}
void traverse(struct node*head)
{
	if(head==NULL)
	printf("node is empty");
	struct node*temp=NULL;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->p;
	}
	printf("NULL");
}
void insertion(struct node*head,int data)
{
	struct node*temp=NULL;
	temp=head;
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->p=NULL;
	
	while(temp->p!=NULL)
		temp=temp->p;
	temp->p=new_node;
}

          
			
