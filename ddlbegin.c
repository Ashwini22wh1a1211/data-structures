#include<stdio.h>
#include<stdlib.h>
struct node
{
 struct node* prev_link;
 int data;
 struct node* next_link;
};
struct node* deletefront(struct node *head);
void display(struct node* head);
int main()
{
 struct node* head=(struct node*)malloc(sizeof(struct node));
 head->prev_link=NULL;
 head->data=10;
 head->next_link=NULL;

 struct node* current=(struct node*)malloc(sizeof(struct node));
 current->prev_link=NULL;
 current->data=20;
 current->next_link=NULL;
 
 head->next_link=current;
 current->prev_link=head;

 printf("Double linked list is created \n");
 display(head);
 printf("Deleting front element of double linked list\n");
 head=deletefront(head);
 printf("After deleting front element\n");
 display(head);
}

struct node* deletefront(struct node *head)
{
 struct node *new=head;
 if(head==NULL)
 {
   printf("linked list is empty");
   return;
 }
head=head->next_link;
head->prev_link=NULL;
printf("%d deleted \n",new->data);
free(new);
return head;
}


void display(struct node* head)
{
 struct node* temp=head;
 int count=0;
  if(head==NULL)
  printf("List is empty");
 else
 {
  printf("NULL<=>");
  while(temp!=NULL)
  {
   printf("%d<=>",temp->data);
   count++;
   temp=temp->next_link;
  }
  printf("NULL\n");
  printf("Count:%d \n",count);
 }
}

