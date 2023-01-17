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
int linearsearch(struct node**start,int item)
{ int index=0;
	struct node*temp;
	temp=*start;
	while(temp!=NULL)
	{
	if(temp->info==item)
	{
	return index;}
	temp=temp->next;
	index++;
     }
	 return -1; 
}
int main()
{
struct node*start;
start=NULL;
int x,item;
insbeg(&start,78);
insbeg(&start,100);
insbeg(&start,789);
insbeg(&start,8999);
insbeg(&start,500);
insbeg(&start,600);
traverse(start);
printf("\nenter the element to be found=>");
scanf("%d",&item);
 int index=linearsearch(&start,item);
 if(index==-1)
 {
 	printf("element is not found");
 	
 }
 else 
 {
 	printf("elemnt is found at:%d",index+1);
 }
}
