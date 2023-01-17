//program for counting nodes containing even and odd information
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
void insbeg(struct node **start,int x)
{
 struct node *temp;
 temp=getnode();
 temp->info=x;
 temp->next=(*start);
 *start=temp;	
}
void count(struct node**start)
{ int count1=0;
  int count2=0;
	struct node* temp;
	temp=*start;
	while(temp!=NULL)
	{     if((temp->info)%2==0)
		{
			count1++;}
		else{
			count2++;}
			
		temp=temp->next;
		}
printf("the number of even count is %d:",count1++);
printf("the number of odd count is %d:",count2++);
		
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
int x,count1,count2;
insbeg(&start,78);
insbeg(&start,100);
insbeg(&start,789);
insbeg(&start,8999);
traverse(start);
count (&start);


}

