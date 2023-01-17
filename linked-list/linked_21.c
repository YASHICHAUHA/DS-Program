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
int kterm(struct node**start1)
{
	struct node*p,*q;
	p=(*start1)->next->next;
	q=*start1;
	while(p!=NULL)
	{
		q=q->next;
		p=p->next;
	}
	printf("%d",q->info);
	
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
insbeg(&start1,99);
traverse(start1);
printf("\n");
printf("the kth term from the last of the linked list is=>");
kterm(&start1);

}
