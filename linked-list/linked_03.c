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
insend(struct node **start,int x)
{
	struct node*temp,*p;
	temp=*start;
    while(temp->next!=NULL)
	temp=temp->next;
   	p=getnode();
   	p->info=x;
   	p->next=NULL;
   	temp->next=p;
   }
   int count(struct node**start)
   { int c=0;
   	struct node*t;
   	t=start;
   	while(t!=NULL)
   	{
   		c++;
   		t=t->next;
	   }
	   return c;	
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
struct node*start;
start=NULL;
int x;
insbeg(&start,78);
insbeg(&start,100);
insbeg(&start,789);
insbeg(&start,8999);
traverse(start);
insend(&start,199);
insend(&start,102);
insend(&start,167);
traverse(start);
x=count(start);
printf("the count of the node is %d",x);
}

