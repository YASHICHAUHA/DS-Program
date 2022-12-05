//****************program for prefix evaluation********************//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
#define true 1;
#define false 0
struct stcak{
	int top;
	char array[size];
}s;
//********************************
void initialize()
{
	s.top=-1;
}
//**********************************
int isempty()
{
	return s.top==-1;
}
//*************************************//
int push( int x)
{ if(s.top==size-1)
   {
 printf("stack is overflow");
  return -1;
     }
     s.top++;
     s.array[s.top]=x;
     return 1;
}
int pop()
{
	char x;
if(isempty())
    {
	printf("Stack is underflows");
	return -1;
	}
	x=s.array[s.top];
	s.top--;
	return x;
}
//*****************************************************//
char stacktop()
{
 int x;
 x=s.array[s.top];
 return x;	
}
//*************************************************//
 int evaluate(int a,int b,char op)
{
	switch(op)
	{
		case'+':return a+b;
		case'-':return a-b;
		case'*':return a*b;
		case'/':return a/b;
		case'%':return a%b;
	}
}
//***************precedence function***************//
int prefixevaluation(char *prefix)
{
	int i=0;
	int a,b,value;
	char symb;
	initialize();
	strrev(prefix);
	while(prefix[i]!='\0')
	{
	symb=prefix[i];
	i++;
	if(symb>='0'&&symb<='9')
	push(symb-'0');
	else
	{
		a=pop();
		b=pop();
		value=evaluate(a,b,symb);
		push(value);
	}
	
	}
	printf("evaluated value of the  expression :->%d",pop());
}
int main()
{
	char exp[]="+-*+7839+26";
     prefixevaluation(exp);
	return ;
}

	
