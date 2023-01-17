/*program for pairwise swap of linked list*/
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
/*void swap(int*a,int*b)
{    
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;	
}*/
int swapp(struct node**start1)
{ int temporary;
	struct node*temp=(*start1);
  while(temp!=NULL&&temp->next!=NULL)
  { temporary=temp->info;
    temp->info=temp->next->info;
    temp->next->info=temporary;
  	temp=temp->next->next;
  }
	
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
insbeg(&start1,889);
traverse(start1);
printf("\n");
printf("the elements after pair-wise swap is=>");
swapp(&start1);
traverse(start1);
}

