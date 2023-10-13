#include<stdio.h>
#include<stdlib.h>
struct single_linked_list
{
	int data;
	char symbol;
	struct single_linked_list*p;
};
void traverse(struct single_linked_list*head);
int main()
{
	struct single_linked_list*head=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
	head->data=10;
	head->symbol='a';
	head->p=NULL;
        struct single_linked_list*current=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
	current->data=20;
	current->symbol='b';
	current->p=NULL;
	head->p=current;
	current=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
	current->data=30;
	current->symbol='c';
	current->p=NULL;
	head->p->p=current;
	traverse(head);
}

void traverse(struct single_linked_list*head)
{
	if(head==NULL)
		printf("single linked list is empty");
	struct single_linked_list*temp=NULL;
	int count=0;
	temp=head;
	while(temp!=NULL)
	{
		printf("(%d %c)--> ",temp->data,temp->symbol);
		count++;
		temp=temp->p;
	}
	printf("\n no. of nodes %d=",count);
}
