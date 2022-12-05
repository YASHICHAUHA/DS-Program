//***program to check whether the given string is a palindrm*//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 6
struct stack{
	char array[size];
    char top;
};

//*********************************************//
void initialize(struct stack *s )
{
	s->top=-1;
}
//********************************************//
void push(struct stack *s, char x)
{
	if(s->top==size-1)
	{
		printf("\n\n stack overflows");
		exit(1);
	}
	s->top=s->top+1;
	s->array[s->top]=x;
}
//*********************************************//
char pop(struct stack*s)
{ char x;
	if(s->top==-1){
		printf("\n\n stack underflows");
	}
	x=s->array[s->top];
	s->top--;
	return x;
}
//******************************************//
char stacktop(struct stack *s){
	char x;
	x=s->array[s->top];
	return x;
}
//********************************************//
int Empty(struct stack s)
{
	if(s.top==-1)
	return 1;
	else
	return 0;
}
//***********************************************//
int main()
{
	struct stack s;
	int c,i=0;
	int j=0;
	char x,str[20];
	char answer[20];
	initialize(&s);
	scanf("%s",str);
	while(str[i]!='\0')
	{
		push(&s,str[i]);
		i++;
    }
    while(!Empty(s))
    {
    	x=pop(&s);
    	answer[j]=x;
    	j++;
	}
answer[j]='\0';
	c=strcmp(str,answer);
	if(c==0)
	{
		printf("the given string is a palindrom");
	}
	else
	{
		printf("the given string is not a palindrom");
	}
	return 0;
	
	
}

