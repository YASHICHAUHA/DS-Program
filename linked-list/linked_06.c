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
insmid( struct node**start,int y,int x)
   {
   	struct node *temp,*p;
   	temp=*start;
   	while(temp!=NULL)
   	{
   		if(temp->info==y)
   			break;
   		else
   			
			   temp=temp->next;
	}
		   p=getnode();
		   p->info=x;
		   p->next=temp->next;
		   temp->next=p;
	   
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
printf("\n");
insmid(&start,789,876);
insmid(&start,78,80);
insmid(&start,8999,30);
traverse(start);
}

