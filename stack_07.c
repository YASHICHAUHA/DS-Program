#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define size 20
struct stack{
	int top;
	int array[size];
}s;
//*********************************//
void initialize(){
s.top=-1;
}
//*************************************//
int isempty()
{
	return s.top==-1;
}
//***********************************//
int push(int x)
{
	if(s.top==size-1)
	{
		printf("stack is overflow");
		return -1;
	}
	s.top++;
	s.array[s.top]=x;
	return 1;
}
//************************************//
int pop()
{  int x;
	if(isempty())
	{
		printf("stack is underflow");
		return -1;
	}
	x=s.array[s.top];
	s.top--;
	return x;
}
//*********************************************//
int main()
{ 
int i=0;
char expression[]= "()";
char x;
initialize();
while(expression!='\0')
{
	x=expression[i];
	if(x=='(')
	push(x);
	else
	pop();
	i++;
}
if(isempty())
{
	printf("it is a correct expression");
}
else
{
	printf("it is an incorrect expression");
}
 return 0;

}

