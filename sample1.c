#include<stdio.h>
struct self
{
	int a;
	char c;
	struct self *p;
};
int main()
{
struct self v;
v.a=10;
v.c='D';
v.p=NULL;
struct self x;
x.a=20;
x.c='s';
x.p=NULL;
v.p = &x;
printf("Block-1 %d,%c",v.a,v.c);
printf("Block-2 %d,%c",v.p->a,v.p->c);
struct self z;
z.a=30;
z.c='C';
z.p =NULL;
x.p =&z;
printf("Block-3 %d,%c",x.p->a,x.p->c);
printf("\nNULL %d",x.a);
}

