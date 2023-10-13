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
        struct node*tail=(struct node*)malloc(sizeof(struct node*));
        tail->data=60;
        tail->symbol='b';
        tail->p=NULL;
        head->p=tail;
        struct node*line=(struct node*)malloc(sizeof(struct node*));
        line->data=40;
        line->symbol='c';
        line->p=NULL;
        tail->p=line;
        printf(" (%d %c)--> (%d %c)--> (%d %c)",head->data,head->symbol,head->p->data,head->p->symbol,tail->p->data, tail->p->symbol);
}

