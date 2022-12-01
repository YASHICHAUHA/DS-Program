// program for decimal to binary conversion
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define size 20
struct stack{
	int top;
	int array[size];
}s;
/*****************************/
void initialize()
{
	s.top=-1;
}
int isempty()
{
	return  s.top==-1;
}
/*******************************/
int push(int x)
{
	if(s.top==size-1)
	{
		printf("stacks overflow");
		return -1;
	}
	s.top++;
	s.array[s.top]=x;
	return 1;
}
/***********************************/
int pop()
{
	int x;
	if(isempty())
	{
		printf("stacks underflows");
		return -1;
	}
	x=s.array[s.top];
	s.top--;
	return x;
}
int peep()
{
	int x;
	x=s.array[s.top];
	return x;
}
//**************************//
void show()
{
	int i;
	if(isempty())
	{
		printf("stack is empty");
	}
	printf(" ");
	for(i=s.top;i>=0;i--)
	{
		printf("%d",s.array[i]);
	}
}
//*************************************//
void decimaltobinary(int d)
{ int r,x;
	while(d>0)
	{
		r=d%2;
		push(r);
		d=d/2;
	}
	printf("decimal equivalent of %d is:=",d);
	while(!isempty())
	{
		x=pop();
		printf("%d",x);
	}
}
//************************************//
int main()
{   int decimal;
	initialize();
	printf("enter  the decimal number");
	scanf("%d",&decimal);
	decimaltobinary(decimal);
	return 0;
}
