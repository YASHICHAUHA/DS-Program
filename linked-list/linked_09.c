/*program for splittiing a linkedlist*/
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
int splitting(struct node**start1,int key)
{
	struct node*p,*q;
	p=(*start1);
	q=(*start1);
	while(start1!=NULL)
	{
		if(p==key);
		{
		return p;
		}
		p=p->next;
	}
	return q;
	
	
		
	
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
struct node*start1,*start2;
start1=NULL;
start2=NULL;
int x;
insbeg(&start1,78);
insbeg(&start1,100);
insbeg(&start1,789);
insbeg(&start1,8999);
insbeg(&start1,9);
traverse(start1);
printf("\n");
printf("the splitting of the linked list is=>");
splitting(&start1,789);
}

