//linked list in ascending order
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};
struct node* getnode()
{
	struct node*p;
	p=(struct node*)malloc(sizeof(struct node));
	return p;
}
void insbeg(struct node **start,int x)
{
 struct node *temp;
 temp=getnode();
 temp->info=x;
 temp->next=(*start);
 *start=temp;	
}
   int insaf(struct node **temp,int x)
   {
   	struct node *p;
   	p=getnode();
   	p->info=x;
   	(p->next)=(*temp)->next;
   	(*temp)->next=p;
   }
   void ascending(struct node**start,int x)
   {
   	struct node*p,*q;
   	p=*start;
   	q=NULL;
   	while(p!=NULL&&x>=p->info)
   	{
   		q=p;
   		p=p->next;
	}
	   if(q==NULL)
	   insbeg(&(*start),x);
	   else
	   insaf(&q,x);
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
struct node*start,*t;
start=NULL;
int x;
ascending(&start,100);
ascending(&start,59);
ascending(&start,1000);
ascending(&start,200);
ascending(&start,500);
ascending(&start,00);
traverse(start);
printf("\n");
}
/*insbeg(&start,78);
insbeg(&start,100);
insbeg(&start,789);
insbeg(&start,8999);
traverse(start);
t=start;
while(t->info!=100)
   t=t->next;
insaf(&t,57);
traverse(start);
printf("\n");*/



