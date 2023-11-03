#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *p;
};
void search(struct node *head,int search);
void traverse(struct node *head);

int main()
{
struct node *head=(struct node*)malloc(sizeof(struct node));
head->data=10;
head->p=NULL;

struct node *current=(struct node*)malloc(sizeof(struct node));
current->data=30;
current->p=NULL;
head->p=current;

current=(struct node*)malloc(sizeof(struct node));
current->data=40;
current->p=NULL;
head->p->p=current;
search(head,30);
}
void search(struct node *head,int search)
{
struct node *temp=head;
int count=1;
while(temp!=NULL)
{
if(temp->data==search)
{
	printf("%d is found at %d node",search,count);
	break;
}
else
{
	temp=temp->p;
	count++;
}
}
}
