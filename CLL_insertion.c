#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};

struct node* CLL_insert_end(struct node *head,int data);
struct node* CLL_insert_beg(struct node *head,int data);
struct node* CLL_insert_random(struct node *head, int data, int position);
void traverse_CLL(struct node *head);

int main()
{
	int choice,data,position;
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->link=head;

	printf("circular linked list is created \n");
	
	while (1)
   	{
        	printf("\nChoose an option:\n");
        	printf("1. Insert at the beginning\n");
        	printf("2. Insert at the end\n");
        	printf("3. Insert at a random position\n");
        	printf("4. Exit\n");
        	printf("Enter your choice: ");
        	scanf("%d", &choice);

		switch (choice)
        	{
            case 1:
      		printf("CLL before insertion at beginning\n");
            	traverse_CLL(head);
            	printf("Enter the data to be inserted at the beginning: ");
                scanf("%d", &data);
                printf("CLL after insertion at beginning\n");
                head=CLL_insert_beg(head,data);
                traverse_CLL(head);
                break;
            case 2:
                printf("CLL before insertion at end\n");
                traverse_CLL(head);
                printf("Enter the data to be inserted at the end: ");
                scanf("%d", &data);
                printf("CLL after insertion at end\n");
                head=CLL_insert_end(head,data);
                traverse_CLL(head);
                break;

      		
            case 3:
                printf("CLL before insertion at random\n");
                traverse_CLL(head);
                printf("Enter the position where the node should be inserted: ");
                scanf("%d", &position);
                printf("Enter the data for the new node: ");
                scanf("%d", &data);
                printf("CLL after insertion at random\n");
                head=CLL_insert_random(head,data,position);
                traverse_CLL(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
void traverse_CLL(struct node* head)
{
	struct node *temp=head->link;
	if(head==NULL)
	{
		printf("No nodes are attached \n");
	}
	do
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}while(temp!=head);\
	printf("%d",head->data);

}

struct node* CLL_insert_beg(struct node* head, int data)
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->link = head->link;
    head->link=new;
    return head;
}

struct node* CLL_insert_end(struct node* head, int data)
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->link = NULL;
    new->link=head->link;
    head->link=new;
    head=head->link;
    return head;
}

struct node* CLL_insert_random(struct node *head,int data,int position)
{
	struct node* new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;
	struct node *temp=head->link;
	if(temp==NULL)
        	printf("No nodes are attached\n");
    	if(position==0)
    	{
        	new->link=head->link;
		head->link=new;
		return head;
    	}	
	else
	{
		while(position>1)
		{
			temp=temp->link;
			position--;
		}
	}
    	new->link = temp->link;
    	temp->link = new;
	if(temp==head)
	{
		head=head->link;
	}
	return head;
}
