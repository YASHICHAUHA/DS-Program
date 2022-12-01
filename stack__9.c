//*************REVERSE OF A STRING USING STACK*************//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 29
struct stack{
	char array[size];
    char top;
};
//*********************************************//
void initialize(struct stack *s)
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
		exit(1);
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
	int i=0;
	int j=0;
	char x,str[20];
	char answer[10];
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
	printf("reverse of  the string is %s",answer);
	return 0;
	
	
}

