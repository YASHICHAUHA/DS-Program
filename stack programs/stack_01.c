#include<stdio.h>
#include<stdlib.h>
#define stacksize 100
struct stack{
	int item[stacksize];
	int top;
};
struct stack s;
void push(int x)
{ if(s.top==stacksize-1 ){
		printf("stack overflows");
		exit(1);
		}
	s.top=s.top+1;
	s.item[s.top]=x;
}
int pop(){
	int x;
	if(s.top==-1){
		printf("its the condition for underflow");
	    exit (1);
	}
	x=s.item[s.top];
	s.top=s.top-1;
	return x;
	}
	int stacktop()
	{
		int x;
		x=s.item[s.top];
		return x;
	}
int main()
{    
		s.top=-1;
		int y;
		push(100);
		push(200);
		push(300);
		push(900);
		y=pop();
		printf("the pop item is %d\n",y);
		y=stacktop();
		printf("the top item is %d\n",y);
	    y=pop();
	    printf("the pop item is %d\n",y);
	    y=pop();
	    printf("\nthe pop item is %d\n",y);
	    return 0;
	}
		
		
		

