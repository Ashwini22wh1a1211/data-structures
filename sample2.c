#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	char symbol;
	struct node*p;
};
int main()
{

	struct node*head=(struct node*)malloc(sizeof(struct node*));
	head->data=50;
	head->symbol='a';
	head->p=NULL;
	printf("Node-1 %d   %c  %d ",head->data,head->symbol,head->p);
	struct node*tail=(struct node*)malloc(sizeof(struct node*));
	tail->data=60;
	tail->symbol='b';
	tail->p=NULL;
	head->p=tail;
	printf("--> %d  %c  %d ", head->p->data, head->p->symbol,tail->p);
	struct node*line=(struct node*)malloc(sizeof(struct node*));
	line->data=40;
	line->symbol='c';
	line->p=NULL;
	tail->p=line;
	printf("---> %d %c %d ",tail->p->data, tail->p->symbol,line->p);
	
}
