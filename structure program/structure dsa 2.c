#include<stdio.h>
struct s
{
 int roll;
 char name[50];
 int age;
 float marks;	
}s;
int main()
{   printf("enter roll number of the student is");
	scanf(" %d",&s.roll);
	printf("the roll number is %d\n",s.roll);
	printf("enter the name of the student is");
	scanf("%s\n",&s.name);
	printf("the name of the student is %s\n",s.name);
	printf("enter the age of the student is");
	scanf("%d",&s.age);
	printf("the age of the student is %d\n",s.age);
	printf("enter the marks of the student is");
	scanf("%f",&s.marks);
	printf("the marks  of the student is %f\n",s.marks);
	return 0;
	
}
