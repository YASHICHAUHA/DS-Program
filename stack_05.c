// program for decimal**** to binary conversion//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define size 20
struct stack{
	int top;
	int array[size];
}s;
/*************************************/
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
/*********************************************/
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
//********************************//
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
void decimaltoanybase(int d,int base)
{ int r,x;
char conversion[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
 initialize();
	printf(" hexadecimal equivalent of  %d is:=",d);
	 	
	 while(d>0)
	{
		r=d%base;
		push(r);
		d=d/base;
	}
  while(!isempty())
	{
		x=pop();
		printf("%c",conversion[x]);
	}
}
//*******************************************//
int main()
{    
    int decimal;
	printf("enter  the decimal number:-");
	scanf("%d",&decimal);
	decimaltoanybase(decimal,2);
	return 0;
}
