//***********merginig of linked list in ascending order********************
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
   insend(struct node **start,int x)
{
	struct node*temp,*p;
	temp=*start;
	if(*start==NULL)
	insbeg(&(*start),x);
	else{
	
    while(temp->next!=NULL)
	temp=temp->next;
   	p=getnode();
   	p->info=x;
   	p->next=NULL;
   	temp->next=p;
   }
}
int mergeascending(struct  node *start1,struct node*start2)
   {
   	struct node*start3=NULL;
   	struct node*p,*q;
   	p=start1;
   	q=start2;
   	while(p!=NULL&&q!=NULL)
   	{
   		if(p->info<q->info)
   		{
   			insend(&start3,p->info);
   			p=p->next;
		   }
		   else
		   {
		   	insend(&start3,q->info);
		   	q=q->next;
		   }
	   }
	   while(p!=NULL)
	   {
	   	insend(&start3,p->info);
	   	p=p->next;
	   }
	   while(q!=NULL)
	   {
	   	insend(&start3,q->info);
	   	q=q->next;
	   }
	   return start3;
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
struct node*start1,*start2,*start3,*t;
start1=NULL;
start2=NULL;
start3=NULL;
int x;
ascending(&start1,100);
ascending(&start1,59);
ascending(&start1,1000);
ascending(&start1,200);
ascending(&start1,500);
ascending(&start2,45);
ascending(&start2,10);
ascending(&start2,990);
ascending(&start2,440);
ascending(&start2,70);
ascending(&start2,780);
traverse(start1);
printf("\n");
traverse(start2);
printf("\n");
start3=mergeascending(start1,start2);
printf("merginf of the linked list in ascending order is->");
traverse(start3);
}

