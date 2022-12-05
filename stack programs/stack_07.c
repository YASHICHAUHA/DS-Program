//*******program to check the validity of parenthesized arithmetic
//expression using stack*********//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 20
struct stack{
	int top;
	int array[size];
}s;
//********I*N*I*T*I*A*L*I*Z*E*********************//
void initialize()
{
	s.top=-1;
}
//*************E*M*P*T*Y***************************//
int  isempty()
{
	return s.top==-1;
}
//**********P*U*S*H***************************//
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
//********P*O*P*******************************//
int pop()
{ int x;
	if(isempty())
	{
		printf("stack is underflow");
		return -1;
	}
	x=s.array[s.top];
	s.top--;
	return x;
}
//*************P*E*E*P*****************************//
int peep()
{
	int x;
	x=s.array[s.top];
	return x;
}
//*******S*H*O*W************************//
int main()
{
	char expression[]="()";
	int i=0;
	char x;
	initialize();
	while(expression[i]!='\0')
	{
		x=expression[i];
		if(x=='(')
		push(x);
		else
		pop();
		i++;
    }
    if(isempty())
    printf("it is correct expression");
    else
    printf("it is an incorrect expression");
	return 0;
}
