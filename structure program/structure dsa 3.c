#include<Stdio.h>
struct s
{
	int roll;
	char name[50];
	int age;
	char address[50];
	float marks;
}s[15];
int main()
{
 int i;
 for(i=1;i<=15;i++)
 {
 	printf("enter the roll number of the student");
 	scanf("%d",&s[i].roll);
 	printf("enter the name of the student is");
 	scanf("%s",&s[i].name);
 	printf("enter the age of the student");
 	scanf("%d",&s[i].age);
 	printf("enter the address of the student");
 	scanf("%s",&s[i].address);
 	printf("enter the marks of the student is");
 	scanf("%s",&s[i].marks);
 }
 printf("its for displaying the information");
 for(i=1;i<=15;i++)
 {
 	printf("the roll numbe rof the student is %d\n",s[i].roll);
 	printf("the name of the student is %s\n",s[i].name);
 	printf("the age of the student is %d\n",s[i].age);
 	printf("the address of the student is %s\n",s[i].address);
 	printf("the marks of the student is %f\n",s[i].marks);
 }
 return 0;
}
