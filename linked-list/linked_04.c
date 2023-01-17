#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node*next;
};
struct node* getnode()
{
	struct node*p;
	p=(struct node*)malloc(sizeof(struct node));
	return p;
}
insbeg(struct node **start,int x)
{
 struct node *temp;
 temp=getnode();
 temp->info=x;
 temp->next=(*start);
 *start=temp;	
}
int concat(struct node**start1, struct node**start2)
{
	struct node *t;
	t=*start1;
	while(t!=NULL)
	{
		t=t->next;
	}
	t->next=*start2;
	return start1;
}
 void traverse(struct node*start)
{
	struct node *t;
	t=start;
	while(t!=NULL)
	{
		printf(" %d ",t->info);
		t=t->next;
	}
}
int main()
{
struct node*start1,*start2,*start3;
start1=NULL;
start2=NULL;
start3=NULL;
int x;
insbeg(&start1,78);
insbeg(&start1,100);
insbeg(&start1,789);
insbeg(&start1,8999);
traverse(start1);
insbeg(&start2,199);
insbeg(&start2,102);
insbeg(&start2,167);
traverse(start2);
start3=concat(start1,start2);
traverse(start3);
}

