#include<stdio.h>
struct s
{ 
char name[50];
int roll;
float marks;
}s;
int main()
{    int sum=0;
	printf("enter the name of student");
	scanf(" %s",&s.name);
	printf("%s\n",s.name);
	printf("enter the roll no");
	scanf("%d",&s.roll);
	printf(" the roll number is %d\n",s.roll);
	scanf("%f",&s.marks);
	printf("the marks of first subject is %f\n",s.marks);
	scanf("%f",&s.marks);
	printf("the marks in second subject is %f\n",s.marks);
	scanf("%f",&s.marks);
	printf("the marks in the third subject is %f\n",s.marks);
	scanf("%f",&s.marks);
	printf("the marks in the fourth subject is %f\n",s.marks);
	scanf("%f",&s.marks);
	printf("the marks in the fifth subject is %f\n",s.marks);
	scanf("%f",&s.marks);
	printf("the marks in the sixth subject is %f\n",s.marks);
    
	
	
}
