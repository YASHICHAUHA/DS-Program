/*************** linked list insertion and traversal and deletion***************************/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
 };
 struct node*START;
   Getnode()
 {
 	struct node *p;
 	p=(struct node *)malloc(sizeof(struct node));
 	return p;
 }
 /********************insert an element in begining********************************/
 insbeg(int x){
 	struct node *temp;
 temp=Getnode();
 temp->info=x;
 temp->next=START;
 START=temp;
 }
 /******************************insert an elemnt at the end********************************/
 insend(int x)
{
	struct node*temp,*p;
	temp=START;
    while(temp->next!=NULL)
	temp=temp->next;
   	p=Getnode();
   	p->info=x;
   	p->next=NULL;
   	temp->next=p;
   }
/**********************insert an elemnt at the middle.****************************************/
   insmid(int y,int x)
   {
   	struct node *temp,*p;
   	temp=START;
   	while(temp!=NULL)
   	{
   		if(temp->info==y)
   			break;
   		else
   			
			   temp=temp->next;
	}
		   p=Getnode();
		   p->info=x;
		   p->next=temp->next;
		   temp->next=p;
	   
   }
/******************************deltion in begining******************************/
 delbeg()
{
	struct node*temp;
	int x;
	temp=START;
	START=START->next;
	x=temp->info;
	free(temp);
	return x;	
}
//****************************deleted last end****************************************/
int delend()
{ int x;
	struct node *p,*q;
	p=START;
	q=NULL;
	while(p->next!=NULL)
	{
		q=p;
		p=p->next;
	}
	q->next=NULL;
	x=p->info;
	free(p);
	return x;
}
/*********************************traverse**********************************************/
traverse()
 {
 	struct node*t;
 	t=START;
 	while(t!=NULL)
 	{
	 
 	printf("%d\t",t->info);
    t=t->next;
	}
}
void main()
{ int x;
	START=NULL;
	insbeg(100);
	insbeg(200);
	insbeg(300);
	insbeg(500);
	traverse();
	printf("\n");
	insend(600);
	insend(678);
	insend(900);
	traverse();
	printf("\n");
	insmid(500,88);
	insmid(300,400);
    traverse();
    printf("\n");
    x=delbeg();
    printf("the deleted element is => %d\n",x);
    x=delbeg();
    printf("the deleted element element is =>%d\n",x);
    traverse();
    printf("\n");
    x=delend();
    printf("the delted node at the end is => %d\n",x);
    x=delend();
    printf("the deleted nod at the end is=>%d\n",x);
    x=delend();
    printf("the deleted nod at the end is =>%d\n",x);
    x=delend();
    printf("the deleted function at the end is =>%d\n",x);
    x=delend();
    printf("the deletd function at the end is =>%d\n",x);
    traverse();
}
 
